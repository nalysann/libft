/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:31:09 by nalysann          #+#    #+#             */
/*   Updated: 2022/05/11 15:43:17 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

#include <stddef.h>

#include "ft_stdlib.h"

void	list_push_front(t_list *list, void *data)
{
	t_node	*tmp;

	tmp = (t_node *)xmalloc(sizeof(t_node));
	tmp->data = data;
	tmp->prev = NULL;
	tmp->next = list->front;
	if (list->front != NULL)
		list->front->prev = tmp;
	else
		list->back = tmp;
	list->front = tmp;
	++list->size;
}

void	list_push_back(t_list *list, void *data)
{
	t_node	*tmp;

	tmp = (t_node *)xmalloc(sizeof(t_node));
	tmp->data = data;
	tmp->prev = list->back;
	tmp->next = NULL;
	if (list->back != NULL)
		list->back->next = tmp;
	else
		list->front = tmp;
	list->back = tmp;
	++list->size;
}
