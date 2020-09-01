/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 18:52:31 by nalysann          #+#    #+#             */
/*   Updated: 2020/09/01 18:52:34 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

#include <stddef.h>
#include <stdlib.h>

void	list_free(t_list *list)
{
	t_node	*node;
	t_node	*tmp;

	node = list->front;
	while (node != NULL)
	{
		tmp = node;
		free(node->data);
		free(node);
		node = node->next;
	}
	list->front = NULL;
	list->back = NULL;
	list->size = 0;
}
