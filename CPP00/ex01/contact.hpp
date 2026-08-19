/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 15:44:46 by gomandam          #+#    #+#             */
/*   Updated: 2026/06/09 01:50:31 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
	public:
		Contact(void);
		~Contact(void);
// setter() functions for getInfo, pass by reference & not value copy
	void	putContact(const std::string &firstName,
			const std::string &lastName,
			const std::string &nickName,
			const std::string &phoneNumber,
			const std::string &darkSecret);
// getter() constant: only for reading, prevents modification of members. Standard practice
	std::string getFirstName(void) const;
	std::string getLastName(void) const;
	std::string getNickName(void) const;
	std::string getPhoneNumber(void) const;
	std::string getDarkSecret(void) const;

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkSecret;
// Std nomenclature: "_" for private variables in the class
// "const" at the beginning, return type. But at end, member function 
};

#endif
