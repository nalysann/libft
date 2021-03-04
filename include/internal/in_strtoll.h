/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_strtoll.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:43:02 by nalysann          #+#    #+#             */
/*   Updated: 2021/03/04 14:43:02 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IN_STRTOLL_H
# define IN_STRTOLL_H

typedef struct	s_strtoll
{
	const char			*str;
	int					base;
	int					sign;
	int					c;
	int					any;
	unsigned long long	res;
}				t_strtoll;

#endif
