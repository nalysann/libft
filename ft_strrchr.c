/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:44:23 by nalysann          #+#    #+#             */
/*   Updated: 2020/02/07 15:44:24 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    char	*ret;

    ret = NULL;
    while (*s)
        if (*s++ == (char)c)
            ret = (char *)(s - 1);
    return ((c == '\0') ? (char *)s : ret);
}
