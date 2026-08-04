/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 17:33:43 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/04 01:54:28 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("[ScavTrap Default]")
{
	this->_hitPoints	= 100;
	this->_energyPoints	= 50;
	this->_attackDamage	= 20;
	std::cout << "[ScavTrap] Default Constructor Called: " << _name << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	_hitPoints	= 100;
	_energyPoints	= 50;
	_attackDamage	= 20;
	std::cout << "[ScavTrap] Constructor Called: " << _name << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "[ScavTrap] " << _name << " Destroyed.\n";
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "[ScavTrap] " << _name << ": Copy Constructed.\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "[ScavTrap] " << _name << ": Copy Assignment Operator called.\n";
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0)
	{
		std::cout << "[ScavTrap] " << _name << " can't attack, insufficient HIT POINTS.\n";
		return ;
	}

	if (_energyPoints <= 0)
	{
		std::cout << "[ScavTrap] " << _name << " can't attack, insufficient ENERGY POINTS.\n";
		return ;
	}
	_energyPoints -= 1;
	std::cout << "[ScavTrap] " << _name << " attacks " << target << ", causing " << _attackDamage << " damage points!\n";
}

void	ScavTrap::guardGate(void)
{
	std::cout << "[ScavTrap] " << _name << ": Guard Gate Activated.\nA specifier to control which base class parts can be accessed by derived class/outside code.\n";
}

