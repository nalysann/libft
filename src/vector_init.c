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

#include "ft_stdio.h"
#include "ft_vector.h"

#include <stdlib.h>

void	vector_init(t_vector *vector)
{
	vector->capacity = VECTOR_INIT_CAPACITY;
	vector->size = 0;
	vector->data = (void **)malloc(sizeof(void *) * vector->capacity);
	if (vector->data == NULL)
	{
		exit_with_error(VECTOR_ALLOC_MSG, E_VECTOR_ALLOC);
	}
}
