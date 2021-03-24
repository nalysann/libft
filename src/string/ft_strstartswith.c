/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstartswith.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 19:36:08 by nalysann          #+#    #+#             */
/*   Updated: 2021/03/24 19:36:10 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strstartswith(const char *str, const char *prefix)
{
	while (*str == *prefix)
	{
		if (*prefix == '\0')
			break ;
		++str;
		++prefix;
	}
	return (*prefix == '\0');
}
