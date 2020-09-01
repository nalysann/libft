/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_set.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 17:09:52 by nalysann          #+#    #+#             */
/*   Updated: 2020/09/01 17:09:52 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_error.h"
#include "ft_vector.h"

#include <stddef.h>

void	vector_set(t_vector *v, size_t idx, void *item)
{
	if (idx < v->size_)
	{
		v->data_[idx] = item;
	}
	else
	{
		ft_throw(VECTOR_INDEX_MSG, E_VECTOR_INDEX);
	}
}
