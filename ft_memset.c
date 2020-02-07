/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:41:11 by nalysann          #+#    #+#             */
/*   Updated: 2020/02/07 15:41:13 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *memset(void *b, int c, size_t len)
{
    while (len != 0)
        ((unsigned char *)b)[--len] = (unsigned char)c;
    return (b);
}
