/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_get.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 17:14:08 by nalysann          #+#    #+#             */
/*   Updated: 2020/09/01 17:14:09 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_error.h"
#include "ft_vector.h"

#include <stddef.h>

void	*vector_get(t_vector *v, size_t idx)
{
	if (idx < v->size_)
	{
		return (v->data_[idx]);
	}
	else
	{
		ft_throw(VECTOR_INDEX_MSG, E_VECTOR_INDEX);
	}
	return (NULL);
}
