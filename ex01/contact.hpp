/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 15:44:46 by gomandam          #+#    #+#             */
/*   Updated: 2026/05/29 22:00:20 by gomandam         ###   ########.fr       */
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
	// functions for getInfo
	void	putContact(const std::string &firstName,
			const std::string &lastName,
			const std::string &nickName,
			const std::string &phoneNumber,
			const std::string &darkSecret);
	// pass by reference & no value copy

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkSecret;
};

// Std nomenclature: "_" for private variables in the class


#endif
