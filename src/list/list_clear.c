/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_clear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 13:46:43 by nalysann          #+#    #+#             */
/*   Updated: 2022/05/11 15:45:30 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

#include <stdlib.h>

void	list_clear(t_list *list)
{
	t_node	*cur;
	t_node	*tmp;

	if (list->size == 0)
		return ;
	cur = list->front;
	while (cur)
	{
		tmp = cur;
		cur = cur->next;
		free(tmp);
	}
	list_init(list);
}

void	list_clear_deep(t_list *list, void (*del_func)(void *))
{
	t_node	*cur;
	t_node	*tmp;

	if (list->size == 0)
		return ;
	cur = list->front;
	while (cur)
	{
		tmp = cur;
		cur = cur->next;
		del_func(tmp->data);
		free(tmp);
	}
	list_init(list);
}
