/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 21:23:02 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/03 01:37:23 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	objectA("Juggernaut");

	objectA.attack("((0._.0))");	// HP: 10  EP: 9
	objectA.takeDamage(3);		// HP: 7   EP: 9
	objectA.beRepaired(1);		// HP: 8   EP: 8

// Energy Depletion			   HP: 8    EP: 7 -> 0
	std::cout << "The Juggernaut wants to attack 10 times, with HP: 8\n";
	for (int i = 0; i < 10; ++i)
		objectA.attack("the wall of Gibraltar");

// No energy left			   HP: 8    EP: 0
	objectA.attack("NPC");
	objectA.beRepaired(1);
	
	objectA.attack("NPC");
	objectA.beRepaired(1);


// Kill ClapTrap			   HP: 0    EP: 0 
	objectA.takeDamage(99);

// No sufficient Hit Points		   HP: 0    EP: 0
	objectA.attack("NPC");
	objectA.beRepaired(1);

	return (0);
}
