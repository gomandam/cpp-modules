/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 19:55:36 by gomandam          #+#    #+#             */
/*   Updated: 2026/06/19 01:30:24 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>
#include <string>

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB(void)
{
}

void	HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack(void) const
{
	if (_weapon)
		std::cout << _name << " engaged attack with " << _weapon->getType() << std::endl;
}

// HumanB uses pointer: Weapon is optional, and modifiable
// References enforce contracts at compile time; pointers allow runtime flexibility
