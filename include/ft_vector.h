/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 16:18:25 by nalysann          #+#    #+#             */
/*   Updated: 2020/09/01 16:18:26 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VECTOR_H
# define FT_VECTOR_H

# include <stddef.h>

# define VECTOR_INIT_CAPACITY	8
# define VECTOR_BAD_CAPACITY	(size_t)-1
# define VECTOR_GROWTH_SCALE	2

typedef struct	s_vector
{
	void	**data;
	size_t	size;
	size_t	capacity;
}				t_vector;

/*
** vector_get returns NULL for indices out of range
** vector_on_heap returns NULL on memory allocation failure
** vector_on_stack and vector_on_heap return vector with capacity
**     set to VECTOR_BAD_CAPACITY on underlying array allocation failure
** vector_pop_back returns NULL for empty vectors
** vector_push_back and vector_resize set capacity to
**     VECTOR_BAD_CAPACITY on resize failure
** vector_set does nothing for indices out of range
*/

void			vector_free(t_vector *vector);
void			vector_free_deep(t_vector *vector, void (*f)(void *));
void			*vector_get(t_vector *vector, size_t idx);
t_vector		vector_on_stack(void);
t_vector		*vector_on_heap(void);
void			*vector_pop_back(t_vector *vector);
void			vector_push_back(t_vector *vector, void *item);
void			vector_resize(t_vector *vector, size_t new_size);
void			vector_set(t_vector *vector, size_t idx, void *item);
void			vector_sort(t_vector *vector,
				int (*cmp)(const void *, const void *));

#endif
