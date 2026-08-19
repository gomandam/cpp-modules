/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 19:55:36 by gomandam          #+#    #+#             */
/*   Updated: 2026/06/19 01:30:43 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack(void) const
{
	std::cout << _name << " engaged attack with " << _weapon.getType() << std::endl;
}

// HumanA uses reference: Weapon is mandatory and constant throughout lifetime
// References enforce contracts at compile time; pointers allow runtime flexibility
