#ifndef FT_LIST_H
# define FT_LIST_H

# include <stddef.h>

struct s_node
{
	void			*data;
	struct s_node	*prev;
	struct s_node	*next;
};

typedef struct s_node	t_node;

struct s_list
{
	t_node	*back;
	t_node	*front;
	size_t	size;
};

typedef struct s_list	t_list;

/*
** list_on_heap returns NULL on memory allocation failure
** list_pop_back and list_pop_front return NULL for empty lists
** list_push_back and list_push_front do nothing on node allocation failure
*/

void	list_free(t_list *list);
void	list_free_deep(t_list *list, void (*f)(void *));
t_list	list_on_stack(void);
t_list	*list_on_heap(void);
void	*list_pop_back(t_list *list);
void	*list_pop_front(t_list *list);
void	list_push_back(t_list *list, void *item);
void	list_push_front(t_list *list, void *item);

#endif
