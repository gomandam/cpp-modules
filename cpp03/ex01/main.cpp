/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 21:23:02 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/04 02:00:57 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
// CLAPTRAP
	std::cout << "\n ******** CLAPTRAP TEST ******** " << std::endl;
	ClapTrap	clap("Juggernaut II");	
		clap.attack("the wall");
		clap.takeDamage(3);
		clap.beRepaired(1);

// SCAVTRAP
	std::cout << "\n ******** SCAVTRAP TEST ******** " << std::endl;
	ScavTrap	scav("Fortress of Defence");
		scav.attack("the intruder");
		scav.guardGate();
		scav.takeDamage(30);
		scav.beRepaired(15);
	std::cout << " ________ END BASIC TEST ________ " << std::endl; 

// SCAVTRAP COPY
	std::cout << "\n ******** SCAVTRAP TEST: COPY TEST ******** " << std::endl;
	ScavTrap	monoptych("The artwork");
	ScavTrap	diptych(monoptych);
	ScavTrap	triptych("the replica");

	triptych = monoptych;
	triptych.guardGate();
	
	return (0);
}
