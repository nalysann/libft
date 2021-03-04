/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 18:10:56 by nalysann          #+#    #+#             */
/*   Updated: 2020/09/01 18:10:57 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

#include <stddef.h>
#include <stdlib.h>

t_list	list_on_stack(void)
{
	t_list	list;

	list.front = NULL;
	list.back = NULL;
	list.size = 0;
	return (list);
}

t_list	*list_on_heap(void)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (list == NULL)
		return (NULL);
	list->front = NULL;
	list->back = NULL;
	list->size = 0;
	return (list);
}
