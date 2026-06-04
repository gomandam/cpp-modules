/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 20:07:38 by gomandam          #+#    #+#             */
/*   Updated: 2026/06/04 14:45:26 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "./Contact.hpp"

class Phonebook
{
	public:
		Phonebook(void);
		~Phonebook(void);
	void	addContact(const Contact &contact);
	void	displayContacts(void) const;
	void	displayContact(int index) const;
	void	getContactCount(void) const;

// no dynamic memory allocation, fixed array 
	private:
		Contact _contacts[8];
		int	_contactCount;
		int	_oldestIndex;

	std::string _fitToWidth(const std::string &str, int width) const; // truncates the width of phonebook
};

#endif
