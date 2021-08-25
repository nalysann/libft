/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fminl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 13:48:01 by nalysann          #+#    #+#             */
/*   Updated: 2021/08/25 13:48:01 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long double	ft_fminl(long double x, long double y)
{
	if (x < y)
		return (x);
	else
		return (y);
}
