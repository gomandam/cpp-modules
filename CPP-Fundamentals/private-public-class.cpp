/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   private-public-class.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 15:50:47 by gomandam          #+#    #+#             */
/*   Updated: 2026/05/27 19:12:54 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* CLASS: USAGE OF PRIVATE and PUBLIC
 *
 * Private: not accessible modifier, only to itselfi (class). Encapsulation of data, protect objects
 *
 * Public: accessible outside class
 *  
 * Classes are supposed to control their own state, so we can't make everything public
 * 	defend itself from invalid usage
 * 
 * Class members: private by default
 * Struct members: public by default
 *
 * Example: BANK - public: balance, withdraw || private: bypass, edit account balance
 *
 * Hide data, expose behaviour. Keep variables private, expose controlled public functions
 *
*/

#include <string>
#include <iostream>

// This doesn't have CONSTRUCTOR/DESTRUCTOR, therefore compile in C++11. Not C++98 standard

class Character
{
	public:
		std::string	name;	// initialized in public, but recommended in private as standard practice
		std::string	role;
		int	level;

	void	increaseLevel(int addlvl)
	{
		for (int i = 0; i < addlvl; ++i)
		{
			levelUpOnce();	// public call from private
			std::cout << "HP increased: " << lifePoints << std::endl;
			std::cout << "Attack increased: " << attack << std::endl;
		}
	}

	private:
		double	lifePoints = 300;	// error: if compiled in c++98, since no constructor
		double	attack = 10.50;

	void levelUpOnce()
	{
		++level;
		lifePoints = lifePoints + (lifePoints * 0.1337);
		attack = attack + (attack * 0.42);
	}
};

int	main(void)
{
	Character	danpoi;
	danpoi.name = "Than Fui";
	danpoi.role = "Bard";
	danpoi.level = 0;


// GM buff: increase lvl
	danpoi.increaseLevel(25);
	std::cout << danpoi.name << " the " << danpoi.role << " reached level: " << danpoi.level;

// By using (pointers?) std::cout the previous level, lifePoints, attack -> to the new one.
	return (0);
}



