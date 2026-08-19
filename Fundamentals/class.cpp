/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 21:49:44 by gomandam          #+#    #+#             */
/*   Updated: 2026/05/26 22:56:09 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// making objects by using class

#include <iostream>
#include <string>

class kindOfObject
{
	// public access specifier, members/elements are accessible outside class
	// group together: datatypes, functions ..etc
	public:
		std::string	name;
		std::string	shape;
		double	weight;
		int	quantity;

	void selectAny(int amount)
	{
		quantity = quantity - amount;
	}
};

int	main(void)
{
	// create an object instance 'kindOfObject' with datatypes/elements
	kindOfObject  computerScreen;
	computerScreen.name = "MAC";
	computerScreen.shape = "rectangle";
	computerScreen.weight = 5.555;
	computerScreen.quantity = 6;

	std::cout << computerScreen.name << " has " << computerScreen.quantity
		  << " items \n";
	std::cout << "Parameters: " << computerScreen.shape << " "
		  << computerScreen.weight << "kg " << std::endl;
	
	std::cout << "Take a quantity of: ";
	int	get;
	std::cin >> get;
	if (get <= computerScreen.quantity)
	{
		computerScreen.selectAny(get);
		std::cout << "Total quantity; " << computerScreen.quantity << std::endl;
	}
	else
		std::cout << "Invalid amount. Go kill yourself.\n";
	return (0);	
}
