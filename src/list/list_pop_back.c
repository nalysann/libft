#include <stddef.h>
#include <stdlib.h>

#include "ft_list.h"
#include "ft_stdio.h"

void* list_pop_back(t_list* list)
{
    if (list->size == 0) {
        ft_error(EMPTY_LIST_POP_MSG, E_LIST_ERROR);
    }

    if (list->front == list->back) {
        list->front = NULL;
    } else if (list->front->next == list->back) {
        list->front->next = NULL;
    }
    t_node* node = list->back;
    list->back = node->prev;
    if (list->back != NULL) {
        list->back->next = NULL;
    }
    --list->size;
    void* data = node->data;
    free(node);
    return data;
}
