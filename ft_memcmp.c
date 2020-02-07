/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:42:29 by nalysann          #+#    #+#             */
/*   Updated: 2020/02/07 15:42:30 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char		*cs1;
    const unsigned char		*cs2;

    cs1 = (const unsigned char *)s1;
    cs2 = (const unsigned char *)s2;
    while (n--)
        if (*cs1 != *cs2)
            return (*cs1 - *cs2);
        ++cs1;
        ++cs2;
    return (0);
}
