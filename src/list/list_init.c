/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 13:46:50 by nalysann          #+#    #+#             */
/*   Updated: 2022/05/11 14:54:23 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

#include <stddef.h>

#include "ft_stdlib.h"

void	list_init(t_list *list)
{
	list->size = 0;
	list->front = NULL;
	list->back = NULL;
}

t_list	*list_alloc(void)
{
	t_list	*list;

	list = (t_list *)xmalloc(sizeof(t_list));
	list_init(list);
	return (list);
}
