/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 23:07:29 by gomandam          #+#    #+#             */
/*   Updated: 2026/07/21 03:36:53 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed		a;
	Fixed const	b ( Fixed (5.05f) * Fixed (2) );

	std::cout <<	a	<< std::endl;
	std::cout <<	++a	<< std::endl;
	std::cout <<	a	<< std::endl;
	std::cout <<	a++	<< std::endl;
	std::cout <<	a	<< std::endl;

	std::cout <<	b	<< std::endl;

	std::cout << Fixed::max(a,b) << std::endl;

	return (0);
}
