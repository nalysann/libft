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

#include <stddef.h>
#include <stdlib.h>

void	vector_free(t_vector *v)
{
	free(v->data);
	v->data = NULL;
	v->size = 0;
	v->capacity = 0;
}
