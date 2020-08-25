# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nalysann <urb-ilya@yandex.ru>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/14 12:17:04 by nalysann          #+#    #+#              #
#    Updated: 2020/07/14 12:17:09 by nalysann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = libft.a

SRC_DIR = src

SRC = ft_digittoint.c \
      ft_isalnum.c \
      ft_isalpha.c \
      ft_isascii.c \
      ft_isblank.c \
      ft_iscntrl.c \
      ft_isdigit.c \
      ft_isgraph.c \
      ft_islower.c \
      ft_isprint.c \
      ft_ispunct.c\
      ft_isspace.c \
      ft_isupper.c \
      ft_isxdigit.c \
      ft_tolower.c \
      ft_toupper.c \
      ft_throw.c \
      ft_putchar.c \
      ft_putchar_fd.c \
      ft_putendl.c \
      ft_putendl_fd.c \
      ft_putnbr.c \
      ft_putnbr_fd.c \
      ft_putstr.c \
      ft_putstr_fd.c \
      get_next_line.c \
      ft_printf.c \
      pft_bigint.c \
      pft_buffer.c \
      pft_handle_asterisk.c \
      pft_handle_bigfloat.c\
      pft_handle_bin.c \
      pft_handle_char.c \
      pft_handle_float.c \
      pft_handle_hex_lower.c \
      pft_handle_hex_upper.c \
      pft_handle_invalid.c \
      pft_handle_length.c \
      pft_handle_oct.c \
      pft_handle_percent.c \
      pft_handle_placeholder.c \
      pft_handle_pointer.c \
      pft_handle_rounding.c \
      pft_handle_signed.c \
      pft_handle_string.c \
      pft_handle_unsigned.c \
      pft_print_placeholder.c \
      pft_read_fields.c \
      pft_utils_1.c \
      pft_utils_2.c \
      ft_lstadd.c \
      ft_lstdel.c \
      ft_lstdelone.c \
      ft_lstiter.c \
      ft_lstmap.c \
      ft_lstnew.c \
      ft_abs.c \
      ft_fabs.c \
      ft_fabsf.c \
      ft_fabsl.c \
      ft_fmax.c \
      ft_fmaxf.c \
      ft_fmaxl.c \
      ft_fmin.c \
      ft_fminf.c \
      ft_fminl.c \
      ft_labs.c \
      ft_llabs.c \
      ft_llmax.c \
      ft_llmin.c \
      ft_lmax.c \
      ft_lmin.c \
      ft_max.c \
      ft_min.c \
      ft_atoi.c \
      ft_atol.c \
      ft_atoll.c \
      ft_itoa.c \
      ft_memalloc.c \
      ft_memdel.c \
      ft_strdel.c \
      ft_strnew.c \
      ft_strtol.c \
      ft_strtoll.c \
      ft_bzero.c \
      ft_memccpy.c \
      ft_memchr.c \
      ft_memcmp.c \
      ft_memcpy.c \
      ft_memmove.c \
      ft_mempcpy.c \
      ft_memset.c \
      ft_strcasecmp.c \
      ft_strcat.c \
      ft_strchr.c \
      ft_strclr.c \
      ft_strcmp.c \
      ft_strcpy.c \
      ft_strdup.c \
      ft_strequ.c \
      ft_striter.c \
      ft_striteri.c \
      ft_strjoin.c \
      ft_strlcat.c \
      ft_strlcpy.c \
      ft_strlen.c \
      ft_strmap.c \
      ft_strmapi.c \
      ft_strncasecmp.c \
      ft_strncat.c \
      ft_strncmp.c \
      ft_strncpy.c \
      ft_strndup.c \
      ft_strnequ.c \
      ft_strnlen.c \
      ft_strnstr.c \
      ft_strrchr.c \
      ft_strsplit.c \
      ft_strstr.c \
      ft_strsub.c \
      ft_strtrim.c

INC_DIR = inc \
          inc/ft_printf \
          inc/hidden

OBJ_DIR = obj

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

DEP = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.d))

CC = gcc

CFLAGS = -Wall -Wextra -Werror \
         $(addprefix -I , $(INC_DIR)) \
         -MMD \
         -march=native -O2 -pipe

SHELL = /bin/zsh

WHITE = "\033[0;0m"
RED = "\033[1;31m"
GREEN = "\033[1;32m"
YELLOW = "\033[1;33m"
BACK = "\033[A\033[M"

.PHONY: all clean fclean re

all:
	@$(MAKE) $(LIB)

$(LIB): $(OBJ)
	@ar -cr $@ $?
	@ranlib $@
	@echo -e $(BACK)$(GREEN)$@ created$(WHITE)

$(OBJ_DIR):
	@mkdir -p $@
	@echo

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo -e $(YELLOW)compiling: $(@:$(OBJ_DIR)/%=%)$(BACK)$(WHITE)

include $(wildcard $(DEP))

clean:
	@rm -rf $(OBJ_DIR)
	@echo -e $(RED)object and dependency files deleted$(WHITE)

fclean: clean
	@rm -f $(LIB)
	@echo -e $(RED)$(LIB) deleted$(WHITE)

re: fclean all
