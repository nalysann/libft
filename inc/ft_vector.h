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
# define VECTOR_RESIZE_SCALE	2

# define VECTOR_ALLOC_MSG	"Memory allocation for vector data failed"
# define VECTOR_INDEX_MSG	"Vector index out of bounds"

# define E_VECTOR_ALLOC		1
# define E_VECTOR_INDEX		2

typedef struct	s_vector
{
	void	**data_;
	size_t	size_;
	size_t	capacity_;

	size_t	(*size)(struct s_vector *);
	void	(*resize)(struct s_vector *, size_t);
	void	(*push_back)(struct s_vector *, void *);
	void	(*set)(struct s_vector *, size_t, void *);
	void	*(*get)(struct s_vector *, size_t);
	void	(*free)(struct s_vector *);
}				t_vector;

void			vector_free(t_vector *v);
void			*vector_get(t_vector *v, size_t idx);
void			vector_push_back(t_vector *v, void *item);
void 			vector_resize(t_vector *v, size_t size);
void			vector_set(t_vector *v, size_t idx, void *item);
size_t			vector_size(t_vector *v);

#endif
