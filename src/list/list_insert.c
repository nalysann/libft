/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_insert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:23:06 by nalysann          #+#    #+#             */
/*   Updated: 2022/05/11 15:32:49 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

#include "ft_stdlib.h"

void	list_insert_before(t_list *list, t_node *cur, void *data)
{
	t_node	*tmp;

	tmp = (t_node *)xmalloc(sizeof(t_node));
	tmp->data = data;
	tmp->prev = cur->prev;
	tmp->next = cur;
	cur->prev = tmp;
	if (tmp->prev)
		tmp->prev->next = tmp;
	else
		list->front = tmp;
}

void	list_insert_after(t_list *list, t_node *cur, void *data)
{
	t_node	*tmp;

	tmp = (t_node *)xmalloc(sizeof(t_node));
	tmp->data = data;
	tmp->prev = cur;
	tmp->next = cur->next;
	cur->next = tmp;
	if (tmp->next)
		tmp->next->prev = tmp;
	else
		list->back = tmp;
}
