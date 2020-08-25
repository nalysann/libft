/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pft_read_fields.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urb-ilya@yandex.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 18:30:41 by nalysann          #+#    #+#             */
/*   Updated: 2020/08/25 18:30:42 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PFT_READ_FIELDS_H
# define PFT_READ_FIELDS_H

# include "pft_handle_placeholder.h"

void	read_flags(const char **format, t_fields *fields);
void	read_width(const char **format, t_fields *fields);
void	read_precision(const char **format, t_fields *fields);
void	read_length(const char **format, t_fields *fields);
void	read_type(const char **format, t_fields *fields);

#endif
