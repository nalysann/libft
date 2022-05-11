#include "ft_list.h"

#include <stddef.h>

#include "ft_stdlib.h"

void list_push_front(t_list* list, void* data)
{
    t_node* tmp = (t_node*)xmalloc(sizeof(t_node));
    tmp->data = data;
    tmp->prev = NULL;
    tmp->next = list->front;
    if (list->front != NULL)
        list->front->prev = tmp;
    else
        list->back = tmp;
    list->front = tmp;
    ++list->size;
}

void list_push_back(t_list* list, void* data)
{
    t_node* tmp = (t_node*)xmalloc(sizeof(t_node));
    tmp->data = data;
    tmp->prev = list->back;
    tmp->next = NULL;
    if (list->back != NULL)
        list->back->next = tmp;
    else
        list->front = tmp;
    list->back = tmp;
    ++list->size;
}
