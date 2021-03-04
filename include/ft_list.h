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
}				t_list;

/*
** list_on_heap returns NULL on memory allocation failure
** list_pop_back and list_pop_front return NULL for empty lists
** list_push_back and list_push_front do nothing on node allocation failure
*/

void			list_free(t_list *list);
void			list_free_deep(t_list *list, void (*f)(void *));
t_list			list_on_stack();
t_list			*list_on_heap();
void			*list_pop_back(t_list *list);
void			*list_pop_front(t_list *list);
void			list_push_back(t_list *list, void *item);
void			list_push_front(t_list *list, void *item);

#endif
