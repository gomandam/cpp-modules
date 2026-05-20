/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 20:17:12 by gomandam          #+#    #+#             */
/*   Updated: 2026/05/20 18:41:02 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::cout << "program success\n";
	return (0);	// Signals program for successful termination
}

// 	Namespace prefix "std::" prefix tells the compiler to look for "cout" inside 
// 	standard library namespace. A way to group related names, avoid conflicts.
// COMPILATION: g++ -Wall -Wextra -Werror -std=c++98 test.cpp -o test.out
