/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:32:26 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/06 22:52:34 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("Default_clap_name"), ScavTrap(), FragTrap(), _name("Default")
{
	_hitPoints 	= 100;		// FragTrap
	_energyPoints 	= 50;		// ScavTrap
	_attackDamage 	= 30;		// FragTrap
	std::cout << "[DiamondTrap] " << _name << " default constructed.\n";
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	_hitPoints 	= 100;
	_energyPoints 	= 50;
	_attackDamage	= 30;
	std::cout << "[DiamondTrap] " << _name << " constructed.\n";
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "[DiamondTrap] " << _name << " destructed.\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other), _name(other._name)
{
	std::cout << "[DiamondTrap] " << _name << " copy constructed.\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		_name = other._name;
	}
	std::cout << "[DiamondTrap] " << _name << " copy assigned.\n";
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "[DiamondTrap] name: " << _name << " and ClapTrap name: " << ClapTrap::_name << std::endl;
}
