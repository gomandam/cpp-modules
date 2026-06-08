/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 02:48:40 by gomandam          #+#    #+#             */
/*   Updated: 2026/06/08 22:32:49 by gomandam         ###   ########.fr       */
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
Phonebook::Phonebook(void) {
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
		std::cout << 
	}
}
















