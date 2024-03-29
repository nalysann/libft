/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 13:41:13 by nalysann          #+#    #+#             */
/*   Updated: 2021/08/25 13:41:13 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <stddef.h>

void	ft_bzero(void *s, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memdup(const void *s, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_mempcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t n);
char	*ft_stpcpy(char *dst, const char *src);
char	*ft_stpncpy(char *dst, const char *src, size_t n);
int		ft_strcasecmp(const char *s1, const char *s2);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strchr(const char *s, int c);
void	ft_strclr(char *s);
int		ft_strcmp(const char *s1, const char *s2);
size_t	ft_strcnt(const char *s, char sep);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(const char *s);
int		ft_strendswith(const char *str, const char *suffix);
int		ft_strequ(const char *s1, const char *s2);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjmp(const char **s, char sep);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strjoin_sep(const char *s1, const char *s2, const char *sep);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
void	ft_strlower(char *s);
char	*ft_strmap(const char *s, char (*f)(char));
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
int		ft_strncasecmp(const char *s1, const char *s2, size_t n);
char	*ft_strncat(char *s1, const char *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t n);
char	*ft_strndup(const char *s, size_t n);
int		ft_strnequ(const char *s1, const char *s2, size_t n);
size_t	ft_strnlen(const char *s, size_t maxlen);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
void	ft_strrev(char *s);
char	**ft_strsplit(const char *s, char sep);
int		ft_strstartswith(const char *str, const char *prefix);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strsub(const char *s, unsigned start, size_t len);
char	*ft_strtrim(const char *s);
void	ft_strupper(char *s);

#endif
