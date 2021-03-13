/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 10:47:24 by nalysann          #+#    #+#             */
/*   Updated: 2021/03/13 10:47:26 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

#include <stddef.h>

static void		*hoare(void *left, void *right, size_t size,
				int (*cmp)(const void *, const void *))
{
	void	*pivot;
	void	*i;
	void	*j;

	pivot = left + (right - left) / size / 2 * size;
	i = left;
	j = right;
	while (1)
	{
		while (cmp(i, pivot) < 0)
			++i;
		while (cmp(j, pivot) > 0)
			--j;
		if (i >= j)
			return (j);
		ft_swap(i, j, size);
	}
}

static void		quicksort(void *left, void *right, size_t size,
				int (*cmp)(const void *, const void *))
{
	void	*pivot;

	if (left < right)
	{
		pivot = hoare(left, right, size, cmp);
		quicksort(left, pivot - size, size, cmp);
		quicksort(pivot + size, right, size, cmp);
	}
}

void			ft_qsort(void *data, size_t len, size_t size,
				int (*cmp)(const void *, const void *))
{
	void	*left;
	void	*right;

	if (len == 0)
		return ;
	left = data;
	right = data + (len - 1) * size;
	quicksort(left, right, size, cmp);
}
