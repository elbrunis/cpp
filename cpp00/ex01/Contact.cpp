#include "Contact.hpp"

std::string Contact::getName()
{
	if (Exists)
		return Name;
	return "";
}

std::string	Contact::getNumber()
{
	if (Exists)
		return PhoneNumber;
	return "";
}


std::string Contact::getLastName()
{
	if (Exists)
		return LastName;
	return "";
}

std::string Contact::getNickName()
{
	if (Exists)
		return NickName;
	return "";
}

std::string Contact::getDarkSecret()
{
	if (Exists)
		return DarkSecret;
	return "";
}

void Contact::setContact(std::string _Name, std::string _LastName, std::string _NickName, std::string _PhoneNumber, std::string _DarkSecret)
{
	Name = _Name;
	LastName = _LastName;
	NickName = _NickName;
	DarkSecret = _DarkSecret;
	PhoneNumber = _PhoneNumber;
	this->Exists = true;
}

bool Contact::exists()
{
	return (this->Exists);
}

