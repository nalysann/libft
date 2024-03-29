/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 13:53:29 by nalysann          #+#    #+#             */
/*   Updated: 2021/08/25 13:53:29 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "ft_stdlib.h"

char	*ft_strnew(size_t size)
{
	return (ft_memalloc(size + 1));
}
