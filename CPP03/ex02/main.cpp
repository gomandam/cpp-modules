/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 21:23:02 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/06 00:37:54 by gomandam         ###   ########.fr       */
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

/* Keynotes:
	1. Inheritance is done with ':' >> class FragTrap : public ClapTrap { };
	2. FragTrap constructor explicitly calls ClapTrap() then overrides
	3. Destructors: automatic reverse chaining (FragTrap then ClapTrap)
	4. FragTrap adds: highFivesGuys();

   Automatic Reverse Chaining:
	Expected in the C++ lifetime, after the highFivesGuys() it will print the reverse chain.
	'~' destructor automatically called when object dies: destroys the DERIVED class first, then BASE class (reverse chain).

	Child-specific cleanup runs while BASE data/resources are valid.
	Prevents unsafe access during teardown.	*/
