#include <iostream>
#include "contact.h"
#include "list.h"

void list_initialize(struct LinkedList* list)
{
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
}

struct Node* create_node(void* data)
{
    struct Node* node = new Node;
    if (node != NULL)
    {
        node->data = data;
        node->next = NULL;
        return node;
    }
    else
        std::cerr << "Failed to allocate memory for node" << std::endl;
    return NULL;
}

// The new node will be inserted at the end of the list
void insert(struct LinkedList* list, void* data)
{
    struct Node* node = create_node(data);

    if (list->head == NULL)
    {
        list->head = node;
        list->tail = node;
    }
    else
    {
        list->tail->next = node;
        list->tail = node;
        //node->next = list->tail;
        //list->tail = node;
    }
    list->size += 1;
}
