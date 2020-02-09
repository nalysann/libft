/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 10:26:19 by nalysann          #+#    #+#             */
/*   Updated: 2020/02/09 10:26:20 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		find_fd(void *data, void *item)
{
	if (((t_buf_fd *)data)->fd == *((int *)item))
		return (1);
	return (0);
}

t_list			*get_node(t_list **list, const int fd)
{
	t_list		*node;
	t_buf_fd	buf;

	node = ft_lstfind(*list, (void *)&fd, &find_fd);
	if (node == NULL)
	{
		buf.fd = fd;
		buf.str[0] = '\0';
		ft_lstadd(list, ft_lstnew((void *)&buf, sizeof(t_buf_fd)));
		node = *list;
	}
	return (node);
}

static int		check_buf(char **line, t_list *node)
{
	char		*tmp;
	t_buf_fd	*buf;
	char		*endl;

	tmp = *line;
	buf = (t_buf_fd *)(node->content);
	endl = ft_strchr(buf->str, '\n');
	if (endl != NULL)
	{
		*endl = '\0';
		*line = ft_strjoin(*line, buf->str);
		ft_strcpy(buf->str, endl + 1);
		ft_strdel(&tmp);
		return (1);
	}
	*line = ft_strjoin(*line, buf->str);
	ft_strdel(&tmp);
	buf->str[0] = '\0';
	return (0);
}

static void		del_content(void *content)
{
	ft_memdel(&content);
}

int				get_next_line(const int fd, char **line)
{
	static t_list	*list = NULL;
	t_list			*node;
	ssize_t			ret;

	if (line == NULL || !(*line = ft_strnew(0)))
		return (-1);
	node = get_node(&list, fd);
	if (*(((t_buf_fd *)(node->content))->str) != '\0')
		if (check_buf(line, node) == 1)
			return (1);
	while ((ret = read(fd, ((t_buf_fd *)(node->content))->str, BUFF_SIZE)) > 0)
	{
		(((t_buf_fd *)(node->content))->str)[ret] = '\0';
		if (check_buf(line, node) == 1)
			return (1);
	}
	if (ret < 0)
		return (-1);
	if (**line != '\0')
		return (1);
	ft_lstdelnode(&list, &node, &del_content);
	return (0);
}
