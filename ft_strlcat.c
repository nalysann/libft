/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:43:49 by nalysann          #+#    #+#             */
/*   Updated: 2020/02/07 15:43:51 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t	dst_len;
    size_t	src_len;
    size_t	i;

    dst_len = ft_strnlen(dst, size);
    src_len = ft_strlen(src);
    if (dst_len != size)
    {
        i = 0;
        while (i < size - dst_len - 1 && src[i] != '\0')
        {
            dst[dst_len + i] = src[i];
            ++i;
        }
        dst[dst_len + i] = '\0';
    }
    return (dst_len + src_len);
}
