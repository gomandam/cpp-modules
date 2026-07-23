/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   std-print.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 20:17:12 by gomandam          #+#    #+#             */
/*   Updated: 2026/05/25 22:17:33 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::cout << "Input 4 numbers(INT) in sequence: ";
	
	int	number1;
	int	number2;
	int	n3, n4;

	std::cin >> number1;
	std::cin >> number2;
	std::cin >> n3 >> n4;

	std::cout << "Print number1: " << number1 << '\n';
	std::cout << "Print number2: " << number2 << "\n";
	std::cout << "Print n3 & n4: " << n3 << " and " << n4 << std::endl;
/* ************************************************************************* */
	std::cout << "\nDatatypes\n";
	std::cout << "sizeof(int): " << sizeof(int) << '\n';
		// prints the bytes of memory an INT value take takes 
	std::cout << "sizeof(char): " << sizeof(char) << '\n';
		// prints the bytes of memory an CHAR value take takes 
	std::cout << "sizeof(double): " << sizeof(double) << '\n';
		// prints the bytes of memory an DOUBLE value take takes 
/* ************************************************************************* */
	return (0);	// Signals program for successful termination
}

// Namespace prefix "std::" prefix tells the compiler to look for "cout" inside 
// standard library namespace. A way to group related names, avoid conflicts.
// COMPILATION: "c++/g++" -Wall -Wextra -Werror -std=c++98 test.cpp -o test.out
