/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_push_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 17:06:24 by nalysann          #+#    #+#             */
/*   Updated: 2020/09/01 17:06:25 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"

void	vector_push_back(t_vector *vector, void *item)
{
	if (vector->size == vector->capacity)
	{
		vector_resize(vector, vector->size * VECTOR_RESIZE_SCALE);
	}
	vector->data[vector->size++] = item;
}
