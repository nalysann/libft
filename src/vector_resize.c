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

void	vector_resize(t_vector *v, size_t new_size)
{
	void	**data_;

	if (new_size < v->capacity)
	{
		v->size = new_size;
	}
	else
	{
		data_ = (void **)malloc(sizeof(void *) * new_size);
		if (data_ == NULL)
			ft_throw(VECTOR_ALLOC_MSG, E_VECTOR_ALLOC);
		ft_memmove(data_, v->data, sizeof(void *) * v->size);
		free(v->data);
		v->data = data_;
		v->size = new_size;
		v->capacity = new_size;
	}
}
