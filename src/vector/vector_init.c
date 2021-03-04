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

#include "ft_vector.h"

#include <stdlib.h>

t_vector	vector_on_stack(void)
{
	t_vector	vector;

	vector.capacity = VECTOR_INIT_CAPACITY;
	vector.size = 0;
	vector.data = (void **)malloc(sizeof(void *) * vector.capacity);
	if (vector.data == NULL)
		vector.capacity = VECTOR_BAD_CAPACITY;
	return (vector);
}

t_vector	*vector_on_heap(void)
{
	t_vector	*vector;

	vector = (t_vector *)malloc(sizeof(t_vector));
	if (vector == NULL)
		return (NULL);
	vector->capacity = VECTOR_INIT_CAPACITY;
	vector->size = 0;
	vector->data = (void **)malloc(sizeof(void *) * vector->capacity);
	if (vector->data == NULL)
		vector->capacity = VECTOR_BAD_CAPACITY;
	return (vector);
}
