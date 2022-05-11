#include "ft_list.h"

#include <stddef.h>

#include "ft_stdlib.h"

void list_init(t_list* list)
{
    list->size = 0;
    list->front = NULL;
    list->back = NULL;
}

t_list* list_alloc()
{
    t_list* list = (t_list*)xmalloc(sizeof(t_list));
    list_init(list);
    return list;
}
