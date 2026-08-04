/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 17:34:40 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/04 00:13:24 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAVTRAP_HPP
#define	SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap				// INHERITANCE METHOD
{
	public:
		ScavTrap(void);					// DEFAULT CONSTRUCTOR: initialize object without arguments

		~ScavTrap(void);				// Destructor
		ScavTrap(const std::string& name);		// Constructor (name parameter of object)

		ScavTrap(const ScavTrap& other);		// Copy Constructor: creates an object from an existing object
		ScavTrap& operator=(const ScavTrap& other);	// Copy Assignment Operator: assigns state of one object to another existing object

	void	attack(const std::string& target);
	void	guardGate(void);
};

#endif
