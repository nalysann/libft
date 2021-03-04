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

#include "ft_string.h"
#include "ft_vector.h"

#include <stddef.h>
#include <stdlib.h>

void	vector_resize(t_vector *vector, size_t new_size)
{
	void	**data_;

	if (new_size < vector->capacity)
		vector->size = new_size;
	else
	{
		data_ = (void **)malloc(sizeof(void *) * new_size);
		if (data_ == NULL)
		{
			vector->capacity = VECTOR_BAD_CAPACITY;
			return;
		}
		ft_memmove(data_, vector->data, sizeof(void *) * vector->size);
		free(vector->data);
		vector->data = data_;
		vector->size = new_size;
		vector->capacity = new_size;
	}
}
