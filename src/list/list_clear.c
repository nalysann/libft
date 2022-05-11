#include "ft_list.h"

#include <stdlib.h>

void list_clear(t_list* list)
{
    if (list->size == 0)
        return;
    t_node* cur = list->front;
    while (cur) {
        t_node* tmp = cur;
        cur = cur->next;
        free(tmp);
    }
    list_init(list);
}

void list_clear_deep(t_list* list, void (*del_func)(void*))
{
    if (list->size == 0)
        return;
    t_node* cur = list->front;
    while (cur) {
        t_node* tmp = cur;
        cur = cur->next;
        del_func(tmp->data);
        free(tmp);
    }
    list_init(list);
}
