#include <stddef.h>

#include "ft_list.h"
#include "ft_stdlib.h"

void list_push_back(t_list* list, void* item)
{
    t_node* node = (t_node*)xmalloc(sizeof(t_node));
    node->data = item;
    node->prev = list->back;
    node->next = NULL;
    if (list->back != NULL) {
        list->back->next = node;
    }
    list->back = node;
    if (list->front == NULL) {
        list->front = node;
    }
    ++list->size;
}
