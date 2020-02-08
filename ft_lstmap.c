/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:55:57 by nalysann          #+#    #+#             */
/*   Updated: 2020/02/07 15:55:59 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		del_content(void *content, size_t content_size)
{
	if (content == NULL)
		return ;
	(void)content_size;
	ft_memdel(&content);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*node;
	t_list	*ret;
	t_list	*last;

	if (f == NULL)
		return (NULL);
	last = NULL;
	while (lst != NULL)
	{
		if (!(ret = (*f)(lst)))
		{
			ft_lstdel(&head, &del_content);
			return (NULL);
		}
		if (!(node = ft_lstnew(ret->content, ret->content_size)))
			return (NULL);
		if (last != NULL)
			last->next = node;
		else
			head = node;
		last = node;
		lst = lst->next;
	}
	return (head);
}
