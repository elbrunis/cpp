#include "header.hpp"

void	add_contact(PhoneBook& myBook)
{
	std::string Name;
	while (Name.empty())
	{
		std::cout << "First name: ";
		std::getline(std::cin, Name);

		if (std::cin.eof())
			return;

		if (Name.empty())
			std::cout << "A saved contact can't have empty fields"
				<< std::endl;
	}

	std::string LastName;
	while (LastName.empty())
	{
		std::cout << "Last name: ";
		std::getline(std::cin, LastName);

		if (std::cin.eof())
			return;

		if (LastName.empty())
			std::cout << "A saved contact can't have empty fields"
				<< std::endl;
	}

	std::string NickName;
	while (NickName.empty())
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, NickName);

		if (std::cin.eof())
			return;

		if (NickName.empty())
			std::cout << "A saved contact can't have empty fields"
				<< std::endl;
	}

	std::string PhoneNumber;
	while (PhoneNumber.empty())
	{
		std::cout << "Phone number: ";
		std::getline(std::cin, PhoneNumber);

		if (std::cin.eof())
			return;

		if (PhoneNumber.empty())
			std::cout << "A saved contact can't have empty fields"
				<< std::endl;
	}

	std::string DarkSecret;
	while (DarkSecret.empty())
	{
		std::cout << "Darkest secret: ";
		std::getline(std::cin, DarkSecret);

		if (std::cin.eof())
			return;

		if (DarkSecret.empty())
			std::cout << "A saved contact can't have empty fields"
				<< std::endl;
	}

	myBook.initContact(Name, LastName, NickName,
		PhoneNumber, DarkSecret);
}

int	main()
{
	std::cout << "\033[90m--------------------------\n";
	std::cout << "Welcome to your PhoneBook!\n";
	std::cout << "--------------------------\033[0m\n";
	std::cout << '\n';
	std::string cmd;
	PhoneBook myBook;
	while (1)
	{
		std::cout << "Please enter a command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, cmd);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			break;
		}
		if (cmd == "ADD")
		{
			add_contact(myBook);
			if (std::cin.eof())
				break;
		}
		else if (cmd == "SEARCH")
		{
			myBook.search();
			if (std::cin.eof())
				break;
		}
		else if (cmd == "EXIT")
			break;
		else
			std::cout << "Invalid command please try again..." << std::endl;
	}
	return (0);
}