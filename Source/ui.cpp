#include <iostream>
#include <cstdlib>
#include <string>
#include "ui.h"

void print_title()
{
	system("CLS");
	std::cout << "  CONTACT MANAGER in C++" << std::endl;
	std::cout << "--------------------------" << std::endl;
}

void print_menu()
{
	int choice, error = 0;
	std::string error_msg;

	while (true)
	{
		print_title();

		if (error == 1)
		{
			std::cout << error_msg << std::endl;
			error = 0;
		}
		std::cout << "1. Add Contact" << std::endl;
		std::cout << "2. Edit Contact" << std::endl;
		std::cout << "3. Delete Contact" << std::endl;
		std::cout << "4. Search Contact" << std::endl;
		std::cout << "5. View All Contact" << std::endl;
		std::cout << "0. Exit Program" << std::endl;

		std::cin >> choice;

		switch (choice)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 0:
			break;
		default:
			error = 1;
			error_msg = "Invalid choice. Please try again";
		}
 	}
}