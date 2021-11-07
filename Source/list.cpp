#include <iostream>
#include "contact.h"
#include "list.h"

void list_initialize(LinkedList* list)
{
    list->head = NULL;
    list->size = 0;
}

Node* create_node(void* data)
{
    Node* node = new Node;
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

void insert_first(LinkedList* list, void* data)
{
    Node* node = create_node(data);

    if (list->head == NULL)
    {
        list->head = node;
    }
    else
    {
        node->next = list->head;
        list->head = node;
    }
    list->size += 1;
}

void print_list(LinkedList* list)
{
    Node* current_node = list->head;

    while (current_node != NULL)
    {
        Contact* data = (Contact*)current_node->data;
        std::cout << "ID: " << data->id << std::endl;
        std::cout << "Name: " << data->name << std::endl;
        std::cout << "Phone: " << data->phone_number << std::endl;

        current_node = current_node->next;
    }
}