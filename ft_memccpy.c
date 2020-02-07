/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:41:47 by nalysann          #+#    #+#             */
/*   Updated: 2020/02/07 15:42:03 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    unsigned char		*cdst;
    const unsigned char *csrc;

    if (dst == NULL && src == NULL)
        return (NULL);
    cdst = (unsigned char *)dst;
    csrc = (const unsigned char *)src;
    while (n--)
    {
        *cdst = *csrc;
        ++cdst;
        if (*csrc == (unsigned char)c)
            return ((void *)cdst);
        ++csrc;
    }
    return (NULL);
}
