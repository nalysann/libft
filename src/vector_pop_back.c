/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_pop_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 11:31:30 by nalysann          #+#    #+#             */
/*   Updated: 2020/09/02 11:31:31 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include "ft_vector.h"

void	*vector_pop_back(t_vector *vector)
{
	if (vector->size == 0)
	{
		exit_with_error(VECTOR_EMPTY_MSG, E_VECTOR_EMPTY);
	}
	return (vector->data[vector->size-- - 1]);
}
