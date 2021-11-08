#ifndef _CONTACT_H_
#define _CONTACT_H_

#include <string>
#include <vector>
#include "list.h"

struct Contact
{
    unsigned int id = 0;
    std::string name;
    std::string phone_number;
};

const std::string DELIMITER(";");

void initialize();
void import_data(struct LinkedList* list);
void print_contact_list(struct LinkedList* list);

void split_string(std::string str, const std::string DELIMITER, std::vector<std::string>& out);
void exit_program();

#endif // _CONTACT_H_
