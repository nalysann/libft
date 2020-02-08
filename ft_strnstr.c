/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:44:43 by nalysann          #+#    #+#             */
/*   Updated: 2020/02/07 15:44:44 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t	i;
    size_t	j;

    if (!needle[0])
        return ((char *)haystack);
    i = 0;
    while (i < len && haystack[i])
    {
        j = 0;
        while (i + j < len && needle[j])
        {
            if (haystack[i + j] != needle[j])
                break ;
            ++j;
        }
        if (!needle[j])
            return ((char *)&haystack[i]);
        ++i;
    }
    return (NULL);
}
