/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constuctor-destruct.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 00:35:57 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/20 23:26:35 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Constructors: special type of member function, called when object is created
*  					and initializes that object's state.
*  Create -> Instantiate -> Set Parameters
*  Newly created objects should be usable immediately; hence to AUTOMATICALLY
*  set every property before using it, "constructors" handle it
*
*  Features:
*  Same name with class, no return type (not even void),
*  automatically called upon object creation,
*  purpose: initialize object's data members
*/

#include <iostream>
#include <string>

class Character
{
	public:
		void	printCharacter() {
			std::cout << "Hero: " << _hero << std::endl;
			std::cout << "Weapon: " << _weapon << std::endl;
			std::cout << "Damage: " << _damage << std::endl;
		}	
// Constructors can also access private variables/elements.
// Zero arguments == Assigning values/parameters to all arguments (making it 'Default')
	Character() {
		_hero = "Archer";
		_weapon = "Bow and arrow";
		_damage = 42.0691;
	}

// With multiple constructors, default ususally is without parameters
	Character(std::string hero, double damage) {
		_hero = hero;
		_damage = damage;
	}
// NOTE: by removing assigned/default value or parameter to "double dmg".
// Calling this functions now needs 1 argument and 2 values set to arguments 2 and 3
	Character(double dmg, std::string wpn = "Sword", std::string hero = "Legolas III")
	{
		_damage = dmg;
		_hero = hero;
		_weapon = wpn;
	}
// Constructor overloading: compile error occurs when a constructor has the same function call even with different parameters
// Setting all arguments with DEFAULT == Call with zero arguments; Hence  default constructor, creating a conflict
	
	private:
		std::string _hero;
		std::string _weapon;
		double      _damage;
};

int	main(void)
{
	std::cout << "***Character***\n";
	Character legolas;
	legolas.printCharacter();

	std::cout << "\n***New Role***\n";
	Character legolas2("Legolas II", 420.69);
	legolas2.printCharacter();
	
	std::cout << "\n***New Role Again***\n";
	Character legolas3(42.1337);
	legolas3.printCharacter();
	
	return (0);
}
