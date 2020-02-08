/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:58:19 by nalysann          #+#    #+#             */
/*   Updated: 2020/02/07 16:00:08 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*
**  Standard headers
*/

#include <string.h>

/*
** =============================================================================
**                                    PART 1
** =============================================================================
*/

/*
**  Defines for ft_atoi()
*/

# ifndef ULONG_MAX
#  define ULONG_MAX	((unsigned long)~0)
# endif

# ifndef LONG_MAX
#  define LONG_MAX	((long)(FT_ULONG_MAX >> 1))
# endif

# ifndef LONG_MIN
#  define LONG_MIN	((long)(~FT_LONG_MAX))
# endif

# ifndef SIZE_MAX
#  define SIZE_MAX	((size_t)-1)
# endif

/*
**  Prototypes
*/

void    *ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t  ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int     ft_strcmp(const char *s1, const char *s2);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
int     ft_atoi(const char *str);
int     ft_isupper(int c);
int     ft_islower(int c);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isgraph(int c);
int     ft_isprint(int c);
int     ft_isblank(int c);
int     ft_iscntrl(int c);
int     ft_ispunct(int c);
int     ft_isspace(int c);
int     ft_isxdigit(int c);
int     ft_toupper(int c);
int     ft_tolower(int c)

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

#endif
