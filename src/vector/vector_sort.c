/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 10:47:12 by nalysann          #+#    #+#             */
/*   Updated: 2021/03/13 10:47:14 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include "ft_vector.h"

void	vector_sort(t_vector *vector, int (*cmp)(const void *, const void *))
{
	ft_qsort(vector->data, vector->size, sizeof(void *), cmp);
}
