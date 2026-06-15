/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 02:48:40 by gomandam          #+#    #+#             */
/*   Updated: 2026/06/09 13:03:50 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "./contact.hpp"
#include "./phonebook.hpp"

// ':' Member Initializer List: member variable initialization protocol before constructor executes
// used instead of initializing inside the block { }. Comma separated and values are inside ( )
Phonebook::Phonebook(void) : _contactCount(0), _oldestIndex(0) {
}

// from class Phonebook to the member destructor ~Phonebook
Phonebook::~Phonebook(void) {
}

void	Phonebook::addContact(const Contact &contact)
{
	if (_contactCount < 8)
	{
		_contacts[_contactCount] = contact;
		_contactCount++;
	}
	else
	{
		_contacts[_oldestIndex] = contact;
		_oldestIndex = (_oldestIndex + 1) % 8; 
	}
}

//string member function length() returns length string in bytes
std::string Phonebook::_fitToWidth(const std::string &str, int width) const
{
	if (str.length() > (size_t)width)
	{
		std::string fitWidth = str.substr(0, width - 1);
		fitWidth += ".";
		return (fitWidth);
	}
	return (str);
}

void Phonebook::displayContacts(void) const
{
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	int	i = 0;
	while (i < _contactCount)
	{
		std::cout << "|" << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << _fitToWidth(_contacts[i].getFirstName(), 10);
		std::cout << "|" << std::setw(10) << _fitToWidth(_contacts[i].getLastName(), 10);
		std::cout << "|" << std::setw(10) << _fitToWidth(_contacts[i].getNickName(), 10);
		std::cout << "|" << std::endl;
		i++;
	}
}

void	Phonebook::displayContact(int index) const
{
	if (index < 0 || index >= _contactCount)
	{
		std::cout << "Error: invalid index. \n";
		return ;
	}
	std::cout << "First name: " << _contacts[index].getFirstName() << std::endl;
	std::cout << "Last name: " << _contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << _contacts[index].getNickName() << std::endl;
	std::cout << "Phone number: " << _contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << _contacts[index].getDarkSecret() << std::endl;
}

int	Phonebook::getContactCount(void) const
{
	return (_contactCount);
}
