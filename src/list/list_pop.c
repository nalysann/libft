/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_pop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:31:07 by nalysann          #+#    #+#             */
/*   Updated: 2022/05/11 15:42:24 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

#include <stddef.h>
#include <stdlib.h>

void	list_pop_front(t_list *list)
{
	t_node	*tmp;

	tmp = list->front;
	list->front = tmp->next;
	if (list->front)
		list->front->prev = NULL;
	else
		list->back = NULL;
	free(tmp);
}

void	list_pop_front_deep(t_list *list, void (*del_func)(void *))
{
	t_node	*tmp;

	tmp = list->front;
	list->front = tmp->next;
	if (list->front)
		list->front->prev = NULL;
	else
		list->back = NULL;
	del_func(tmp->data);
	free(tmp);
}

void	list_pop_back(t_list *list)
{
	t_node	*tmp;

	tmp = list->back;
	list->back = tmp->prev;
	if (list->back)
		list->back->next = NULL;
	else
		list->front = NULL;
	free(tmp);
}

void	list_pop_back_deep(t_list *list, void (*del_func)(void *))
{
	t_node	*tmp;

	tmp = list->back;
	list->back = tmp->prev;
	if (list->back)
		list->back->next = NULL;
	else
		list->front = NULL;
	del_func(tmp->data);
	free(tmp);
}
