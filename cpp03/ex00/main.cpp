/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 21:23:02 by gomandam          #+#    #+#             */
/*   Updated: 2026/07/27 23:54:49 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	objectA("juggernaut");

	objectA.attack("target_subject");
	objectA.takeDamage(3);
	objectA.beRepaired(6);

// Energy Depletion
	for (int i = 0; i < 10; ++i)
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
