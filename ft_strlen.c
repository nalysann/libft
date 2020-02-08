/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:42:39 by nalysann          #+#    #+#             */
/*   Updated: 2020/02/07 15:42:41 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlen(const char *s)
{
    const char	*save;

    save = s;
    while (*s)
        ++s;
    return ((size_t)(s - save));
}
