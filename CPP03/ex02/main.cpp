/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 21:23:02 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/05 20:57:47 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
// CLAPTRAP
	std::cout << "\n ******** CLAPTRAP TEST ******** " << std::endl;
	ClapTrap	clap("Juggernaut de II");	
		clap.attack("the wall");
		clap.takeDamage(3);
		clap.beRepaired(1);

// FRAGTRAP
	std::cout << "\n ******** FRAGTRAP TEST ******** " << std::endl;
	FragTrap	frag("Guy de V");
		frag.attack("High-Five Boss");
		frag.takeDamage(30);
		frag.beRepaired(15);
		frag.highFivesGuys();
	std::cout << " ________ END BASIC TEST ________ " << std::endl; 


// FRAGTRAP COPY
	std::cout << "\n ******** FRAGTRAP COPY TEST ******** " << std::endl;
	FragTrap	monoptych("The artwork");
	FragTrap	diptych(monoptych);
	FragTrap	triptych("the replica");

	triptych = monoptych;
	triptych.highFivesGuys();
	
	return (0);
}
