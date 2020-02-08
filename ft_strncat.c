/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:43:42 by nalysann          #+#    #+#             */
/*   Updated: 2020/02/07 15:43:44 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
    char	*ret;

    ret = s1;
    while (*s1)
        ++s1;
    while (n--)
        if (!(*s1++ = *s2++))
            return (ret);
    *s1 = '\0';
    return (ret);
}
