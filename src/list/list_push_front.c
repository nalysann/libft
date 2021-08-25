#include <stddef.h>

#include "ft_list.h"
#include "ft_stdlib.h"

void list_push_front(t_list* list, void* item)
{
    t_node* node = (t_node*)xmalloc(sizeof(t_node));
    node->data = item;
    node->prev = NULL;
    node->next = list->front;
    if (list->front != NULL) {
        list->front->prev = node;
    }
    list->front = node;
    if (list->back == NULL) {
        list->back = node;
    }
    ++list->size;
}
