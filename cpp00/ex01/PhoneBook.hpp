#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

#define MAX_LENGHT 10
#define MAX_ID 8

class PhoneBook
{
	private:
		Contact Contacts[MAX_ID];
		int NextID;
		int NumContacts;

		void	printBook (std::string str);
		void	printContact(Contact myContact);
	public:
		PhoneBook(): NextID(0), NumContacts(0){}
		void	initContact(
			std::string Name,
			std::string LastName,
			std::string NickName,
			std::string PhoneNumber,
			std::string DarkSecret
		);
		void 	search();

};

#endif