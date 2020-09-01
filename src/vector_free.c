/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 17:17:37 by nalysann          #+#    #+#             */
/*   Updated: 2020/09/01 17:17:37 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"

#include <stdlib.h>

void	vector_free(t_vector *v)
{
	free(v->data_);
	v->data_ = NULL;
	v->size_ = 0;
	v->capacity_ = 0;
}
