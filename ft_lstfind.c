/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 11:49:06 by nalysann          #+#    #+#             */
/*   Updated: 2020/02/09 11:49:08 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstfind(t_list *lst, void *item, int (*f)(void *, void *))
{
	while (lst != NULL)
	{
		if ((*f)(lst->content, item) != 0)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
