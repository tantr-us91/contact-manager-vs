#ifndef _LIST_H_
#define _LIST_H_
#include "contact.h"

typedef struct Node
{
    void* data;
    struct Node* next;
} Node;

typedef struct LinkedList
{
    size_t size;
    struct Node* head;
} LinkedList;

void list_initialize(LinkedList* list);
Node* create_node(void* data);
void insert_first(LinkedList* list, void* data);

void print_list(LinkedList* list);

#endif