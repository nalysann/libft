/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:26:06 by nalysann          #+#    #+#             */
/*   Updated: 2021/03/04 10:26:08 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include "in_error.h"

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_error(const char *error_message, int error_code)
{
	if (error_message != NULL)
	{
		ft_putstr_fd(RED, STDERR_FILENO);
		ft_putstr_fd(error_message, STDERR_FILENO);
		ft_putendl_fd(RESET, STDERR_FILENO);
	}
	exit(error_code);
}
