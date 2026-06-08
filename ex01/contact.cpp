/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 19:22:41 by gomandam          #+#    #+#             */
/*   Updated: 2026/06/05 16:11:02 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./contact.hpp"

// empty Constructor for C++98 compilation. "::" Scope Resolution Operator.
// "::" tells the compiler which class or namespace a function belongs to.
// Constructor being defined outside the class
Contact::Contact(void)
{
}

~Contact::Contact(void)
{
}

// setter() function: assigns values to all members, then copies reference value into member variables 
void	Contact::putContact(const std::string &firstName, const std::string &lastName,
		const std::string &nickName, const std::string &phoneNumber, const std::string &darkSecret)
{
	_firstName = firstName;
	_lastName = lastName;
	_nickName = nickName;
	_phoneNumber = phoneNumber;
	_darkSecret = darkSecret;
}

// getter(): reads without modifying, returns value of member variable
std::string Contact::getFirstName(void) const {
	return (_firstName);
}

std::string Contact::getLastName(void) const {
	return (_lastName);
}

std::string Contact::getNickName (void) const {
	return (_nickName);
}

std::string Contact::getPhoneNumber(void) const {
	return (_phoneNumber);
}

std::string Contact::getDarkSecret(void) const {
	return (_darkSecret);
}
