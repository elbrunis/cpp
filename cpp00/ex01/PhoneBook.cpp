#include "PhoneBook.hpp"

void PhoneBook::initContact(std::string Name, std::string LastName,
						std::string NickName, std::string PhoneNumber, std::string DarkSecret)
{
	if (NumContacts < MAX_ID)
		NumContacts += 1;
	Contacts[NextID].setContact(Name, LastName, NickName, PhoneNumber, DarkSecret);
	NextID = (NextID + 1) % MAX_ID;
}

void PhoneBook::printBook(std::string str)
{
	int len = str.size();
	int spc;

	std::cout << '|';
	if (len >= 10)
	{
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << '.';
	}
	else
	{
		spc = 10 - len;
		for (int i = 0; i < spc; i++)
			std::cout << ' ';
		std::cout << str;
	}
}

void PhoneBook::printContact(Contact myContact)
{
	std::cout << "First name: " << myContact.getName() << std::endl;
	std::cout << "Last name: " << myContact.getLastName() << std::endl;
	std::cout << "Nickname: " << myContact.getNickName() << std::endl;
	std::cout << "Phone number: " << myContact.getNumber() << std::endl;
	std::cout << "Darkest secret: " << myContact.getDarkSecret() << std::endl;
}

void PhoneBook::search()
{
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;

	for (int i = 0; i < 8; i++)
	{
		if (Contacts[i].exists() == true)
		{
			for (int j = 0; j < 4; j++)
			{
				if (j == 0)
					std::cout << "|         " << i;
				else if (j == 1)
					printBook(Contacts[i].getName());
				else if (j == 2)
					printBook(Contacts[i].getLastName());
				else if (j == 3)
					printBook(Contacts[i].getNickName());
			}
			std::cout << '|' << std::endl;
		}
	}

	std::cout << "Index to display: ";
	std::string input;
	std::getline(std::cin, input);
	if (std::cin.eof())
	{
		std::cout << std::endl;
		return;
	}
	if (input.length() == 1 && input[0] >= '0' && input[0] <= '7')
	{
		int index = input[0] - '0';
		if (Contacts[index].exists())
			printContact(Contacts[index]);
	}
}
