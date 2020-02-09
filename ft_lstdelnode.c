/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelnode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 12:48:05 by nalysann          #+#    #+#             */
/*   Updated: 2020/02/09 12:48:07 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelnode(t_list **alst, t_list **node, void (*del)(void *))
{
	t_list *iter;
	t_list *next;

	iter = *alst;
	next = iter->next;
	if (iter == *node)
	{
		*alst = next;
		(*del)(iter->content);
		ft_memdel((void **)&iter);
	}
	else
		while (next != NULL)
		{
			if (next == *node)
			{
				(*del)(next->content);
				iter->next = next->next;
				ft_memdel((void **)&next);
				return ;
			}
			iter = next;
			next = next->next;
		}
}
