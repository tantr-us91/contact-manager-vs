#ifndef _LIST_H_
#define _LIST_H_
#include "contact.h"

struct Node
{
    void* data;
    struct Node* next;
};

struct LinkedList
{
    size_t size;
    struct Node* head;
    struct Node* tail;
};

void list_initialize(struct LinkedList* list);
struct Node* create_node(void* data);
void insert(struct LinkedList* list, void* data);

#endif