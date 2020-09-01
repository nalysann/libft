/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_push_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 18:11:07 by nalysann          #+#    #+#             */
/*   Updated: 2020/09/01 18:11:08 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_error.h"
#include "ft_list.h"

#include <stddef.h>
#include <stdlib.h>

void	list_push_front(t_list *list, void *data_)
{
	t_node *node;

	node = (t_node *)malloc(sizeof(t_node));
	if (node == NULL)
		ft_throw(LIST_ALLOC_MSG, E_LIST_ALLOC);
	node->data = data_;
	node->prev = NULL;
	node->next = list->front;
	if (list->front != NULL)
		list->front->prev = node;
	list->front = node;
	if (list->back == NULL)
		list->back = node;
	++list->size;
}
