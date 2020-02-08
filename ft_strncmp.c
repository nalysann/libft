/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:45:27 by nalysann          #+#    #+#             */
/*   Updated: 2020/02/07 15:45:29 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while (n--)
    {
        if ((*s1 == '\0' && *s2 == '\0') || (*s1++ != *s2++))
            return (*(const unsigned char *)(s1 - 1) -
                    *(const unsigned char *)(s2 - 1));
    }
    return (0);
}
