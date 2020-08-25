/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urb-ilya@yandex.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 18:16:53 by nalysann          #+#    #+#             */
/*   Updated: 2020/07/13 18:16:54 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"

#include <unistd.h>

void	ft_putstr(const char *s)
{
	ft_putstr_fd(s, STDOUT_FILENO);
}
