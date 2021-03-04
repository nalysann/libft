/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_with_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 10:44:45 by nalysann          #+#    #+#             */
/*   Updated: 2020/10/09 10:44:46 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include "hd_error.h"

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

void	exit_with_error(const char *error_message, int error_code)
{
	if (error_message != NULL)
	{
		ft_putstr_fd(RED, STDERR_FILENO);
		ft_putstr_fd(error_message, STDERR_FILENO);
		ft_putendl_fd(RESET, STDERR_FILENO);
	}
	exit(error_code);
}
