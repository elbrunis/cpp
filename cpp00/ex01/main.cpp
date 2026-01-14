#include "header.hpp"

void	start_program(void)
{
	std::system("clear");
	std::cout << "Starting program...\n";
	//sleep(2);
	std::system("clear");
	std::cout << "\033[90m--------------------------\n";
	std::cout << "Welcome to your PhoneBook!\n";
	std::cout << "--------------------------\033[0m\n";
	std::cout << '\n';
}

void	add_contact(PhoneBook& myBook)
{
	std::cout << "First name: ";
	std::string Name;
	std::cin >> Name;
		std::cout << "Last name: ";
	std::string LastName;
	std::cin >> LastName;
		std::cout << "Nickname: ";
	std::string NickName;
	std::cin >> NickName;
		std::cout << "Phone number: ";
	std::string PhoneNumber;
	std::cin >> PhoneNumber;
		std::cout << "Darkest secret: ";
	std::string DarkSecret;
	std::cin >> DarkSecret;
	myBook.initContact(Name, LastName, NickName, PhoneNumber, DarkSecret);
}

int	main()
{
	start_program();
	std::string cmd;
	PhoneBook myBook;
	while (1)
	{
		std::cout << "Please enter a command (ADD, SEARCH, EXIT): ";
		std::cin >> cmd;
		if (cmd == "ADD")
			add_contact(myBook);
		else if (cmd  == "SEARCH")
			myBook.search();
		else if (cmd == "EXIT")
			break;
		else
		{
			std::cout << "Invalid command please try again... " << std::endl;
		}
	}
	return (0);
}