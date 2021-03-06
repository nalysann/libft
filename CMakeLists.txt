# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    CMakeLists.txt                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/06 14:47:35 by nalysann          #+#    #+#              #
#    Updated: 2021/03/06 14:47:36 by nalysann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cmake_minimum_required(VERSION 3.17)
project(libft C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "-Wall -Wextra -Werror -O2 -march=native -ftree-vectorize -pipe")

include_directories(include)
include_directories(include/internal)
include_directories(include/internal/printf)

SET(PRINTF_INC
        include/internal/printf/pf_bigint.h
        include/internal/printf/pf_buffer.h
        include/internal/printf/pf_handle_asterisk.h
        include/internal/printf/pf_handle_bigfloat.h
        include/internal/printf/pf_handle_float.h
        include/internal/printf/pf_handle_length.h
        include/internal/printf/pf_handle_placeholder.h
        include/internal/printf/pf_print_placeholder.h
        include/internal/printf/pf_read_fields.h
        include/internal/printf/pf_type_handlers.h
        include/internal/printf/pf_utils.h)

SET(INTERNAL_INC
        ${PRINTF_INC}
        include/internal/in_error.h
        include/internal/in_get_next_line.h
        include/internal/in_strtol.h
        include/internal/in_strtoll.h)

SET(INC
        ${INTERNAL_INC}
        include/ft_complex.h
        include/ft_ctype.h
        include/ft_list.h
        include/ft_math.h
        include/ft_stdio.h
        include/ft_stdlib.h
        include/ft_string.h
        include/ft_vector.h
        include/libft.h)

SET(COMPLEX_SRC
        src/complex/complex_abs.c
        src/complex/complex_add.c
        src/complex/complex_div.c
        src/complex/complex_init.c
        src/complex/complex_mul.c
        src/complex/complex_sub.c)

SET(CTYPE_SRC
        src/ctype/ft_digittoint.c
        src/ctype/ft_isalnum.c
        src/ctype/ft_isalpha.c
        src/ctype/ft_isascii.c
        src/ctype/ft_isblank.c
        src/ctype/ft_iscntrl.c
        src/ctype/ft_isdigit.c
        src/ctype/ft_isgraph.c
        src/ctype/ft_islower.c
        src/ctype/ft_isprint.c
        src/ctype/ft_ispunct.c
        src/ctype/ft_isspace.c
        src/ctype/ft_isupper.c
        src/ctype/ft_isxdigit.c
        src/ctype/ft_tolower.c
        src/ctype/ft_toupper.c)

SET(LIST_SRC
        src/list/list_free.c
        src/list/list_init.c
        src/list/list_pop_back.c
        src/list/list_pop_front.c
        src/list/list_push_back.c
        src/list/list_push_front.c)

SET(MATH_SRC
        src/math/ft_fabs.c
        src/math/ft_fabsf.c
        src/math/ft_fabsl.c
        src/math/ft_fmax.c
        src/math/ft_fmaxf.c
        src/math/ft_fmaxl.c
        src/math/ft_fmin.c
        src/math/ft_fminf.c
        src/math/ft_fminl.c
        src/math/ft_llmax.c
        src/math/ft_llmin.c
        src/math/ft_lmax.c
        src/math/ft_lmin.c
        src/math/ft_max.c
        src/math/ft_min.c)

SET(PRINTF_SRC
        src/stdio/printf/ft_printf.c
        src/stdio/printf/pf_bigint.c
        src/stdio/printf/pf_buffer.c
        src/stdio/printf/pf_handle_asterisk.c
        src/stdio/printf/pf_handle_bigfloat.c
        src/stdio/printf/pf_handle_bin.c
        src/stdio/printf/pf_handle_char.c
        src/stdio/printf/pf_handle_float.c
        src/stdio/printf/pf_handle_hex_lower.c
        src/stdio/printf/pf_handle_hex_upper.c
        src/stdio/printf/pf_handle_invalid.c
        src/stdio/printf/pf_handle_length.c
        src/stdio/printf/pf_handle_oct.c
        src/stdio/printf/pf_handle_percent.c
        src/stdio/printf/pf_handle_placeholder.c
        src/stdio/printf/pf_handle_pointer.c
        src/stdio/printf/pf_handle_rounding.c
        src/stdio/printf/pf_handle_signed.c
        src/stdio/printf/pf_handle_string.c
        src/stdio/printf/pf_handle_unsigned.c
        src/stdio/printf/pf_print_placeholder.c
        src/stdio/printf/pf_read_fields.c
        src/stdio/printf/pf_utils_1.c
        src/stdio/printf/pf_utils_2.c)

SET(STDIO_SRC
        ${PRINTF_SRC}
        src/stdio/ft_error.c
        src/stdio/ft_putchar.c
        src/stdio/ft_putchar_fd.c
        src/stdio/ft_putendl.c
        src/stdio/ft_putendl_fd.c
        src/stdio/ft_putnbr.c
        src/stdio/ft_putnbr_fd.c
        src/stdio/ft_putstr.c
        src/stdio/ft_putstr_fd.c
        src/stdio/get_next_line.c)

SET(STDLIB_SRC
        src/stdlib/free_split.c
        src/stdlib/ft_abs.c
        src/stdlib/ft_atoi.c
        src/stdlib/ft_atol.c
        src/stdlib/ft_atoll.c
        src/stdlib/ft_intlen.c
        src/stdlib/ft_itoa.c
        src/stdlib/ft_labs.c
        src/stdlib/ft_llabs.c
        src/stdlib/ft_memalloc.c
        src/stdlib/ft_memdel.c
        src/stdlib/ft_qsort.c
        src/stdlib/ft_strdel.c
        src/stdlib/ft_strnew.c
        src/stdlib/ft_strtol.c
        src/stdlib/ft_strtoll.c
        src/stdlib/ft_swap.c
        src/stdlib/xcalloc.c
        src/stdlib/xmalloc.c)

SET(STRING_SRC
        src/string/ft_bzero.c
        src/string/ft_memccpy.c
        src/string/ft_memchr.c
        src/string/ft_memcmp.c
        src/string/ft_memcpy.c
        src/string/ft_memdup.c
        src/string/ft_memmove.c
        src/string/ft_mempcpy.c
        src/string/ft_memset.c
        src/string/ft_stpcpy.c
        src/string/ft_stpncpy.c
        src/string/ft_strcasecmp.c
        src/string/ft_strcat.c
        src/string/ft_strchr.c
        src/string/ft_strclr.c
        src/string/ft_strcmp.c
        src/string/ft_strcnt.c
        src/string/ft_strcpy.c
        src/string/ft_strdup.c
        src/string/ft_strendswith.c
        src/string/ft_strequ.c
        src/string/ft_striter.c
        src/string/ft_striteri.c
        src/string/ft_strjmp.c
        src/string/ft_strjoin.c
        src/string/ft_strlcat.c
        src/string/ft_strlcpy.c
        src/string/ft_strlen.c
        src/string/ft_strlower.c
        src/string/ft_strmap.c
        src/string/ft_strmapi.c
        src/string/ft_strncasecmp.c
        src/string/ft_strncat.c
        src/string/ft_strncmp.c
        src/string/ft_strncpy.c
        src/string/ft_strndup.c
        src/string/ft_strnequ.c
        src/string/ft_strnlen.c
        src/string/ft_strnstr.c
        src/string/ft_strrchr.c
        src/string/ft_strrev.c
        src/string/ft_strsplit.c
        src/string/ft_strstartswith.c
        src/string/ft_strstr.c
        src/string/ft_strsub.c
        src/string/ft_strtrim.c
        src/string/ft_strupper.c)

SET(VECTOR_SRC
        src/vector/vector_free.c
        src/vector/vector_get.c
        src/vector/vector_init.c
        src/vector/vector_pop_back.c
        src/vector/vector_push_back.c
        src/vector/vector_resize.c
        src/vector/vector_reverse.c
        src/vector/vector_set.c
        src/vector/vector_sort.c)

SET(SRC
        ${COMPLEX_SRC}
        ${CTYPE_SRC}
        ${LIST_SRC}
        ${MATH_SRC}
        ${STDIO_SRC}
        ${STDLIB_SRC}
        ${STRING_SRC}
        ${VECTOR_SRC})

add_library(ft STATIC
        ${INC}
        ${SRC})
