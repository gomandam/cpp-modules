/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 01:07:19 by gomandam          #+#    #+#             */
/*   Updated: 2026/11/17 01:21:13 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	INTERN_HPP
#define	INTERN_HPP

#include "AForm.hpp"
#include <string>

class Intern
{
	public:
		Intern();
		~Intern();

		Intern(const Intern& other);
			// COPY CONSTRUCTOR - creates new object from existing one
		
		Intern&	operator=(const Intern& other);
			// COPY ASSIGNMENT OPERATOR - copies state of existing object (Intern) to another object (Intern) 

	AForm	*makeForm(const std::string& type, const std::string& target);
};

#endif
