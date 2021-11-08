#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "list.h"
#include "contact.h"

void initialize()
{
    struct LinkedList *contact_list = new LinkedList;
    list_initialize(contact_list);
    import_data(contact_list);
    // print_contact_list(contact_list);
}

void import_data(struct LinkedList* list)
{
    std::fstream file;
    file.open("./data/data.txt", std::ios::in);

    if (file.is_open())
    {
        std::string line;
        while (std::getline(file, line))
        {
            std::vector<std::string> out;
            split_string(line, DELIMITER, out);

            struct Contact* contact = new Contact;
            contact->id = (unsigned int)std::stoi(out[0]);
            contact->name = out[1];
            contact->phone_number = out[2];

            insert(list, contact);
        }
    }
    file.close();
}

void print_contact_list(struct LinkedList* list)
{
    struct Node* current_node = list->head;

    while (current_node != NULL)
    {
        struct Contact* data = (Contact*)current_node->data;
        std::cout << "ID: " << data->id << std::endl;
        std::cout << "Name: " << data->name << std::endl;
        std::cout << "Phone: " << data->phone_number << std::endl;

        current_node = current_node->next;
    }
}

void split_string(std::string str, const std::string DELIMITER, std::vector<std::string>& out)
{
    size_t start = 0, pos;
    while ((pos = str.find(DELIMITER)) != std::string::npos)
    {
        out.push_back(str.substr(start, pos));
        str.erase(start, pos + DELIMITER.length());
    }
    out.push_back(str); // push the remained string (phone number) into the vector
}

