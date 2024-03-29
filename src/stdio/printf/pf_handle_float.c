/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_handle_float.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 13:49:24 by nalysann          #+#    #+#             */
/*   Updated: 2021/08/25 13:49:24 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>

#include "ft_stdlib.h"
#include "ft_string.h"

#include "pf_handle_bigfloat.h"
#include "pf_handle_float.h"
#include "pf_handle_length.h"
#include "pf_handle_placeholder.h"

static void	initialize_decimal_part(t_bigfloat *bf, t_extended ext)
{
	int		i;

	if (bf->exponent >= 0)
		bf->decimal.blocks[0] = 1ULL;
	bf->decimal.size = 1;
	bf->sign = (int)ext.s_.sign;
	if (bf->exponent > 0)
	{
		i = 62;
		while (i > 62 - bf->exponent)
		{
			bigint_mul_ull(&(bf->decimal), 2ULL);
			if (i >= 0 && ((ext.s_.mantissa >> i) & 1) != 0)
				bigint_add_ull(&(bf->decimal), 1ULL);
			--i;
		}
	}
}

static void	initialize_bigfloat(t_bigfloat *bf, t_extended ext)
{
	int			i;
	t_bigint	five;

	bf->exponent = (int)ext.s_.exponent - EXPONENT_SHIFT;
	initialize_decimal_part(bf, ext);
	if (bf->exponent < 0)
	{
		bigint_power_of_five(&five, -(bf->exponent));
		bf->fractional = five;
	}
	if (bf->exponent < 0)
		i = 62;
	else
		i = 62 - bf->exponent;
	while (i >= 0)
	{
		bigint_mul_ull(&(bf->fractional), 10ULL);
		if (((ext.s_.mantissa >> i) & 1) != 0)
		{
			bigint_power_of_five(&five, 63 - bf->exponent - i);
			bigint_add(&(bf->fractional), &five);
		}
		--i;
	}
}

static bool	is_special(t_extended ext, t_fields *fields, char *result)
{
	if (ext.value != ext.value)
		ft_strcat(result, "nan");
	else if (ext.value == 1.0 / 0.0)
		ft_strcat(result, "inf");
	else if (ext.value == -1.0 / 0.0)
		ft_strcat(result, "-inf");
	else if (ext.s_.exponent == 0U && ext.s_.mantissa == 0)
	{
		if (ext.s_.sign == 0U)
			ft_strcat(result, "0");
		else
			ft_strcat(result, "-0");
		if (fields->precision > 0 || (fields->flags & FLAG_HASH) != 0)
			ft_strcat(result, ".");
		while (fields->precision > 0)
		{
			ft_strcat(result, "0");
			--(fields->precision);
		}
	}
	else
		return (false);
	return (true);
}

void	print_bigfloat(t_bigfloat *bf, t_fields *fields, char *result)
{
	int				precision;
	unsigned int	i;
	t_string		decimal;
	t_string		fractional;

	ft_memset(&decimal, 0, sizeof(decimal));
	ft_memset(&fractional, 0, sizeof(fractional));
	print_decimal_part(bf, &decimal);
	print_leading_zeros(bf, fields, &precision, &fractional);
	i = bf->fractional.size - 1;
	if (precision <= 0)
		i = round_fractional(&decimal, &fractional, fields);
	if (i >= 0 && precision > 0)
	{
		moar_precision(&(bf->fractional), &fractional, &precision, (int)i);
		round_fractional(&decimal, &fractional, fields);
	}
	else
		while (precision-- - 1 > 0)
			fractional.str[(fractional.len)++] = '0';
	fields->precision = precision - 1;
	print_float(&decimal, &fractional, fields, result);
}

char	*handle_float(t_fields *fields, va_list ap)
{
	char		*result;
	t_extended	ext;
	t_bigfloat	bf;

	result
		= ft_strnew(fields->precision + BIGINT_MAX_BLOCKS * BIGINT_BLOCK_SIZE);
	result[0] = '\0';
	ext.value = get_float(ap, (int)fields->length);
	ft_memset(&bf, 0, sizeof(bf));
	bf.decimal.size = 1;
	bf.fractional.size = 1;
	if (!is_special(ext, fields, result))
	{
		initialize_bigfloat(&bf, ext);
		if (bf.sign != 0)
			ft_strcat(result, "-");
		print_bigfloat(&bf, fields, result + (bf.sign != 0));
	}
	return (result);
}
