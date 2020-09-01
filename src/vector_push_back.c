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

void	vector_push_back(t_vector *v, void *item)
{
	if (v->size_ == v->capacity_)
	{
		vector_resize(v, v->size_ * VECTOR_RESIZE_SCALE);
	}
	v->data_[v->size_++] = item;
}
