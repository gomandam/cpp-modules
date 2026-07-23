/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   private-public-class.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 15:50:47 by gomandam          #+#    #+#             */
/*   Updated: 2026/06/04 10:15:09 by gomandam         ###   ########.fr       */
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
		double	healthpoints;

	// getter(); since you can only access private inside the class -> make public function
	double	getLifePoints()
	{
		return (this-> _lifePoints);
	}

	double	getAttack()
	{
		return (this-> _attack);
	}

	std::string	getNickname()
	{
		return (this-> _nickname);
	}

	void	increaseLevel(int addlvl)
	{
		for (int i = 0; i < addlvl; ++i)
		{
			levelUpOnce();	// public call from private
			std::cout << "HP increased: " << _lifePoints << std::endl;
			std::cout << "Attack increased: " << _attack << std::endl;
		}
	}

	// setter(); concept similar to getter() but uses a "this->" pointer(?) to access/write value
	void	setLifePoints(double lifeValue)
	{
		if (lifeValue >= 9999)	// add hypothetical edge-cases
			std::cerr << "Max value error. You are not immortal.";
		this-> _lifePoints = lifeValue;	
	}

	void setAttack(double atkdmg)
	{
		if (atkdmg >= 9999)
			std::cerr << "Max value error. You are not a god.";
		this-> _attack = atkdmg;
	}

	void	setNickname(std::string	insertNickName)
	{
		this-> _nickname = insertNickName;
	}

/******************************************************************/

	private:
		double	_lifePoints = 3000.001;	// error: if compiled in c++98, since no constructor
		double	_attack = 1000.50;
		std::string	_nickname = "Bakunawa II";

	void levelUpOnce()
	{
		++level;
		_lifePoints = _lifePoints + (_lifePoints * 0.1337);
		_attack = _attack + (_attack * 0.42);
	}
};

int	main(void)
{
	Character	danpoi;
	danpoi.name = "ThanFui";
	danpoi.role = "Bard";
	danpoi.level = 0;


// GM buff: increase lvl
	danpoi.increaseLevel(25);
	std::cout << "\nCharacter: " << danpoi.name << " the " << danpoi.role << " reached level: " << danpoi.level;

// By using (pointers?) std::cout the previous level, lifePoints, attack -> to the new one.
// By using "this->" like a pointer to change values from private manually: use the getter() and setter()
	danpoi.setLifePoints(3300.33);
	danpoi.setAttack(99.99);
	danpoi.setNickname("NewBakunawa");
	std::cout << "\nRenamed (set new nickname): " << danpoi.getNickname() << std::endl;
	std::cout << "Changed the health and attack to: " << danpoi.getLifePoints() << " and " << danpoi.getAttack() << std::endl;
	return (0);
}

/*
 * RESOURCES:
 * 	1. Getters() and setters(), and "this -> ":  <https://www.youtube.com/watch?v=5_GQw06deQg>
 *	2. 
 */
