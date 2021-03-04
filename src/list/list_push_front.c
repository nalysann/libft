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

#include "ft_list.h"

#include <stddef.h>
#include <stdlib.h>

void	list_push_front(t_list *list, void *item)
{
	t_node *node;

	node = (t_node *)malloc(sizeof(t_node));
	if (node == NULL)
		return ;
	node->data = item;
	node->prev = NULL;
	node->next = list->front;
	if (list->front != NULL)
		list->front->prev = node;
	list->front = node;
	if (list->back == NULL)
		list->back = node;
	++list->size;
}
