/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 10:30:17 by nalysann          #+#    #+#             */
/*   Updated: 2020/08/27 10:30:19 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stddef.h>

# define LIST_ALLOC_MSG		"Memory allocation for list node failed"
# define LIST_EMPTY_MSG		"Can't perform operation on an empty list"

# define E_LIST_ALLOC		1
# define E_LIST_EMPTY		2

typedef struct	s_node
{
	void			*data;
	struct s_node	*prev;
	struct s_node	*next;
}				t_node;

typedef struct	s_list
{
	t_node	*back;
	t_node	*front;
	size_t	size;

	void	(*free)(struct s_list *);
	void	*(*pop_back)(struct s_list *);
	void	*(*pop_front)(struct s_list *);
	void	(*push_back)(struct s_list *, void *);
	void	(*push_front)(struct s_list *, void *);
}				t_list;

void			list_free(t_list *list);
void			list_init(t_list *list);
void			*list_pop_back(t_list *list);
void			*list_pop_front(t_list *list);
void			list_push_back(t_list *list, void *data_);
void			list_push_front(t_list *list, void *data_);

#endif
