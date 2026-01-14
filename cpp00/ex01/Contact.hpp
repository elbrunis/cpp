#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
	private:
		std::string Name;
		std::string LastName;
		std::string NickName;
		std::string DarkSecret;
		std::string PhoneNumber;
		bool Exists;
	public:
		Contact(): Exists(false){}
		void	setContact(
			std::string _Name,
			std::string _LastName,
			std::string _NickName,
			std::string _PhoneNumber,
			std::string _DarkSecret
		);
		std::string	getName();
		std::string	getLastName();
		std::string	getNickName();
		std::string	getNumber();
		std::string	getDarkSecret();
		bool 	exists();
};

#endif