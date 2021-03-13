/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 10:45:23 by nalysann          #+#    #+#             */
/*   Updated: 2020/08/27 10:45:24 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include "ft_stdlib.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	digits[9];
	int		i;

	if (n < 0)
		ft_putchar_fd('-', fd);
	i = 0;
	if (n == 0)
		digits[i++] = '0';
	while (n != 0)
	{
		digits[i++] = (char)('0' + ft_abs(n % 10));
		n /= 10;
	}
	while (i--)
		ft_putchar_fd(digits[i], fd);
}
