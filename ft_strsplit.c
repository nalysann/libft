/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:50:32 by nalysann          #+#    #+#             */
/*   Updated: 2020/02/07 15:50:34 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words_sep(const char *s, char c)
{
	size_t	words;

	words = 0;
	while (*s != '\0')
	{
		while (*s == c)
			++s;
		if (*s)
		{
			++words;
			while (*s != '\0' && *s != c)
				++s;
		}
	}
	return (words);
}

static char		*get_word_sep(const char *word, char c)
{
	size_t	len;

	len = 0;
	while (word[len] != '\0' && word[len] != c)
		++len;
	return (ft_strndup(word, len));
}

static void		free_text(char **text, size_t size)
{
	while (size-- != 0)
		ft_strdel(&text[size]);
	free(*text);
}

static char		**get_text(const char *s, char c, size_t words)
{
	char	**text;
	char	*word;
	size_t	i;

	i = 0;
	if (!(text = malloc(sizeof(*text) * (words + 1))))
		return (NULL);
	while (i < words)
	{
		while (*s == c)
			++s;
		if (*s != '\0')
		{
			if (!(word = get_word_sep(s, c)))
			{
				free_text(text, i);
				return (NULL);
			}
			text[i++] = word;
			s += (ft_strlen(word) + 1);
		}
	}
	text[i] = NULL;
	return (text);
}

char			**ft_strsplit(const char *s, char c)
{
	if (s == NULL)
		return (NULL);
	return (get_text(s, c, count_words_sep(s, c)));
}
