/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pft_print_placeholder.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urb-ilya@yandex.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 18:30:32 by nalysann          #+#    #+#             */
/*   Updated: 2020/08/25 18:30:34 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PFT_PRINT_PLACEHOLDER_H
# define PFT_PRINT_PLACEHOLDER_H

# include "pft_buffer.h"
# include "pft_handle_placeholder.h"

# include <stdarg.h>

int		print_placeholder(t_fields *fields, va_list ap, t_buffer *buf);

#endif
