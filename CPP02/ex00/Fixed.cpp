/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 00:45:00 by gomandam          #+#    #+#             */
/*   Updated: 2026/07/14 20:51:10 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPointValue(0)
{
	std::cout << "Called: Default constructor." << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Called: Destructror." << std::endl;
}

Fixed::Fixed(const Fixed & other)
{
	std::cout << "Called: Copy Constructor." << std::endl;
	*this = other; // this->setRawBits(other.getRawBits());
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Called: Copy Assignment Operator." << std::endl;
	if (this != &other)
		this->_fixedPointValue = other.getRawBits();
	return (*this);
}

// Fixed-point number stores a real value as a scaled integer called Raw Units
// With 8 fractional bits, 1 whole equals 256 (2^8) raw units, so the value is interpreted as rawBits / 256

int	Fixed::getRawBits(void) const
{
	std::cout << "Called: getRawBits member function." << std::endl;
	return (this->_fixedPointValue);
}

// Fixed-point arithmetic stores values as scaled integers instead of floating-point numbers
// Using 8 fractional bits means every 256 raw units represent 1 whole, allowing fractions to be represented efficiently.

void	Fixed::setRawBits(int const raw)
{
	std::cout << "Called: setRawBits member function." << std::endl;
	this->_fixedPointValue = raw;
}
