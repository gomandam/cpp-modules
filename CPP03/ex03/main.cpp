/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 21:23:02 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/06 22:58:17 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	std::cout << "\n ********* DIAMONDTRAP COPY TEST ********* " << std::endl;
	DiamondTrap	rough("Diamond");

	rough.whoAmI();
	rough.attack("the target");
	rough.guardGate();
	rough.highFivesGuys();

	return (0);
}
