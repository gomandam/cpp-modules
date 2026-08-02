/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 21:23:02 by gomandam          #+#    #+#             */
/*   Updated: 2026/07/31 19:48:30 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	objectA("juggernaut");

	objectA.attack("TARGET");
	objectA.takeDamage(2);
	objectA.beRepaired(3);

// Energy Depletion
	for (int i = 0; i < 2; ++i)
		objectA.attack("wall");

// No energy left
	objectA.beRepaired(1);

// Kill ClapTrap
	objectA.takeDamage(100);

// No sufficient HP
	objectA.attack("ghost");
	objectA.beRepaired(5);

	return (0);
}
