/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 21:23:23 by gomandam          #+#    #+#             */
/*   Updated: 2026/07/28 05:46:06 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamge(0)
{
	std::cout << "ClapTrap" << _name << " constructed." << std::endl;
}

ClapTrap::~ClapTrap(void)
{	std::cout << "ClapTrap " << _name << " destroyed.\n"; 	}

ClapTrap::ClapTrap(const ClapTrap& other)
	: _name(other._name),  
{
	std::cout << " copy c"
}

//  SELF ASSIGNMENT GUARD: prevents object from copying own members to itself
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		_name 		= other._name;
		_hitPoints 	= other._hitPoints;
		_energyPoints 	= other._energyPoints;
		_attackDamge 	= other._attackDamge;
	}
	std::cout << "ClapTrap" << _name << " copy-assigned.\n";
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
}

void	ClapTrap::takeDamage(unsigned int amount)
{
}

void	ClapTrap::beRepaired(unsigned int amount)
{
}


