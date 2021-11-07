#ifndef _CONTACT_H_
#define _CONTACT_H_
#include <string>
#include <vector>
#include "list.h"

typedef struct Contact
{
    unsigned int id = 0;
    std::string name;
    std::string phone_number;
} Contact;

const std::string DELIMITER(";");

void initialize();
void import_data(struct LinkedList* list);
void split_string(std::string str, const std::string DELIMITER, std::vector<std::string>& out);

#endif // _CONTACT_H_
