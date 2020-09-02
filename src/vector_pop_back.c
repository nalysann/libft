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

#include "ft_error.h"
#include "ft_vector.h"

void	*vector_pop_back(t_vector *v)
{
	if (v->size == 0)
	{
		ft_throw(VECTOR_EMPTY_MSG, E_VECTOR_EMPTY);
	}
	return (v->data[v->size-- - 1]);
}