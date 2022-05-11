#include "ft_list.h"

#include <stddef.h>
#include <stdlib.h>

void list_erase(t_list* list, t_node* cur)
{
    if (cur->prev != NULL)
        cur->prev->next = cur->next;
    else
        list->front = cur->next;
    if (cur->next != NULL)
        cur->next->prev = cur->prev;
    else
        list->back = cur->prev;
    free(cur);
}

void list_erase_deep(t_list* list, t_node* cur, void (*del_func)(void*))
{
    if (cur->prev != NULL)
        cur->prev->next = cur->next;
    else
        list->front = cur->next;
    if (cur->next != NULL)
        cur->next->prev = cur->prev;
    else
        list->back = cur->prev;
    del_func(cur->data);
    free(cur);
}
