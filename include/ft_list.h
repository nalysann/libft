#ifndef FT_LIST_H
#define FT_LIST_H

#include <stddef.h>

struct s_node {
    void* data;
    struct s_node* prev;
    struct s_node* next;
};

typedef struct s_node t_node;

struct s_list {
    size_t size;
    t_node* front;
    t_node* back;
};

typedef struct s_list t_list;

void list_init(t_list* list);
t_list* list_alloc();
void list_clear(t_list* list);
void list_clear_deep(t_list* list, void (*del_func)(void*));
void list_push_front(t_list* list, void* item);
void list_push_back(t_list* list, void* item);
void list_pop_front(t_list* list);
void list_pop_front_deep(t_list* list, void (*del_func)(void*));
void list_pop_back(t_list* list);
void list_pop_back_deep(t_list* list, void (*del_func)(void*));
void list_insert_before(t_list* list, t_node* cur, void* data);
void list_insert_after(t_list* list, t_node* cur, void* data);
void list_erase(t_list* list, t_node* cur);
void list_erase_deep(t_list* list, t_node* cur, void (*del_func)(void*));

#endif
