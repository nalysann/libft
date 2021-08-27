/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 13:51:01 by nalysann          #+#    #+#             */
/*   Updated: 2021/08/25 13:51:01 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include "ft_stdio.h"

static const char	g_reset[] = "\033[0;0m";
static const char	g_red[] = "\033[1;31m";

void	ft_error(const char *msg, int code)
{
	write(STDERR_FILENO, g_red, sizeof(g_red) - 1);
	ft_putendl_fd(msg, STDERR_FILENO);
	write(STDERR_FILENO, g_reset, sizeof(g_reset) - 1);
	exit(code);
}

void	ft_error2(const char *first, const char *second, int code)
{
	write(STDERR_FILENO, g_red, sizeof(g_red) - 1);
	ft_putstr_fd(first, STDERR_FILENO);
	ft_putstr_fd(": ", STDERR_FILENO);
	ft_putendl_fd(second, STDERR_FILENO);
	write(STDERR_FILENO, g_reset, sizeof(g_reset) - 1);
	exit(code);
}

void	ft_error3(const char *s1, const char *s2, const char *s3, int code)
{
	write(STDERR_FILENO, g_red, sizeof(g_red) - 1);
	ft_putstr_fd(s1, STDERR_FILENO);
	ft_putstr_fd(": ", STDERR_FILENO);
	ft_putstr_fd(s2, STDERR_FILENO);
	ft_putstr_fd(": ", STDERR_FILENO);
	ft_putendl_fd(s3, STDERR_FILENO);
	write(STDERR_FILENO, g_reset, sizeof(g_reset) - 1);
	exit(code);
}

void	ft_perror(const char *msg, int code)
{
	write(STDERR_FILENO, g_red, sizeof(g_red) - 1);
	perror(msg);
	write(STDERR_FILENO, g_reset, sizeof(g_reset) - 1);
	exit(code);
}

void	ft_perror2(const char *first, const char *second, int code)
{
	write(STDERR_FILENO, g_red, sizeof(g_red) - 1);
	ft_putstr_fd(first, STDERR_FILENO);
	ft_putstr_fd(": ", STDERR_FILENO);
	perror(second);
	write(STDERR_FILENO, g_reset, sizeof(g_reset) - 1);
	exit(code);
}
