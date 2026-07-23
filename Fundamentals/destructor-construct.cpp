/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destructor-construct.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 10:22:44 by gomandam          #+#    #+#             */
/*   Updated: 2026/06/04 11:30:22 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Destructor: run when objects are destroyed. Free dynamically allocated memory.
 *	in C++ standards, use "new" and "delete" instead of malloc-free
 * Instances of objects being destroyed:
 *  1. if object is local to a function, after executing it is destroyed
 *  2. objects with loop variables, after the loop completes
 *  3. block-scoped variable (e.g. inside "if" "while" etc.)
 * Destructor is the cleanup mechanism, guarantees that resources (i.e. memory, file handles, database)
 * 	are properly released whenever objects are destroyed. 
*/

#include <iostream>

class Number
{
	public:
		Number(double number)
		{
			_number = number;
			std::cout << "[constructor executed] number input: " << _number << std::endl;
		}
		
		~Number()
		{
			std::cout << "[destructor executed] number submitted: " << _number << std::endl;
		}


	private:
		double _number; // what's the purpose of this if I don't need to initialize value?
};

// create and call a function that makes an object
void	createObject()
{
	// from class Number
	Number anyDouble(42.1337);
}

int	main(void)
{
	std::cout << "Object created: " << std::endl;
	createObject();
	
	double setValue;
	std::cout << "Input any DOUBLE: ";
	std::cin >> setValue;
	Number putAnyDoubleNumber(setValue);
	return(0);
}
