/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_resize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 16:38:27 by nalysann          #+#    #+#             */
/*   Updated: 2020/09/01 16:38:29 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_error.h"
#include "ft_vector.h"
#include "ft_string.h"

#include <stddef.h>
#include <stdlib.h>

void	vector_resize(t_vector *v, size_t size)
{
	void	**data;

	if (size < v->capacity_)
	{
		v->size_ = size;
	}
	else
	{
		data = (void **)malloc(sizeof(void *) * size);
		if (data == NULL)
			ft_throw(VECTOR_ALLOC_MSG, E_VECTOR_ALLOC);
		ft_memmove(data, v->data_, sizeof(void *) * v->size_);
		free(v->data_);
		v->data_ = data;
		v->size_ = size;
		v->capacity_ = size;
	}
}
