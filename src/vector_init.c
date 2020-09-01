/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 16:27:45 by nalysann          #+#    #+#             */
/*   Updated: 2020/09/01 16:27:46 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_error.h"
#include "ft_vector.h"

#include <stdlib.h>

void	vector_init(t_vector *v)
{
	v->capacity = VECTOR_INIT_CAPACITY;
	v->size = 0;
	v->data = (void **)malloc(sizeof(void *) * v->capacity);
	if (v->data == NULL)
		ft_throw(VECTOR_ALLOC_MSG, E_VECTOR_ALLOC);
	v->free = vector_free;
	v->get = vector_get;
	v->push_back = vector_push_back;
	v->resize = vector_resize;
	v->set = vector_set;
}
