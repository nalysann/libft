/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_strtol.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:42:52 by nalysann          #+#    #+#             */
/*   Updated: 2021/03/04 14:42:53 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IN_STRTOL_H
# define IN_STRTOL_H

typedef struct	s_strtol
{
	const char		*str;
	int				base;
	int				sign;
	int				c;
	int				any;
	unsigned long	res;
}				t_strtol;

#endif
