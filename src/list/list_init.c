#include <stddef.h>

#include "ft_list.h"
#include "ft_stdlib.h"

t_list list_on_stack()
{
    t_list list;
    list.front = NULL;
    list.back = NULL;
    list.size = 0;
    return list;
}

t_list* list_on_heap()
{
    t_list* list = (t_list*)xmalloc(sizeof(t_list));
    list->front = NULL;
    list->back = NULL;
    list->size = 0;
    return list;
}
