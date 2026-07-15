/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 00:45:00 by gomandam          #+#    #+#             */
/*   Updated: 2026/07/16 01:14:13 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int value)
{
	std::cout << "const INTEGER constructor called." << std::endl;
	_fixedPointValue = value << _fractionalBits;			// << bit shift operator
}

Fixed::Fixed(const float value)
{
	std::cout << "const FLOAT constructor called." << std::endl;
									// Calculate positions to shift
	int	bitsToShift = _fractionalBits;
	float	scaleFactor = static_cast<float> (1 << bitsToShift);
									// Shift the decimal point by multiplication
	float	scaleValue = value * scaleFactor;
									// Round to the nearest integer to handle float-point 
	float	roundValue = roundf(scaleValue);
									// Store as INT
	_fixedPointValue = static_cast<int>(roundValue);
}


Fixed::Fixed(void)
{
	std::cout << "Default constructor called." << std::endl;
	this->_fixedPointValue = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructror is called." << std::endl;
}

Fixed::Fixed(const Fixed & other)
{
	std::cout << "Copy Constructor called." << std::endl;
	*this = other; // this->setRawBits(other.getRawBits());
	// calls assignment operator, uses other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy Assignment Operator is called." << std::endl;
	if (this != &other)
		this->_fixedPointValue = other.getRawBits();
	return (*this);

}
// Fixed-point number stores a real value as a scaled integer called Raw Units
// With 8 fractional bits, 1 whole equals 256 (2^8) raw units, so the value is interpreted as rawBits / 256
// 8 fractional bits means every 256 raw units represent 1 whole, allowing fractions represented efficiently.

// ENCAPSULATION
int	Fixed::getRawBits(void) const
{
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}

// CONVERSIONS
float	Fixed::toFloat(void) const
{
	float fixedFloat = static_cast<float> (_fixedPointValue);
	float scaleFactor = static_cast<float> (1 << _fractionalBits);
	return (fixedFloat / scaleFactor);
}

int	Fixed::toInt(void) const
{
	return (_fixedPointValue >> _fractionalBits);
}
// Faster calculation: bit-shift discards fractional bits, removes last binary digits
// _fractionalBits = 8, binary base(2) 2^8 = 256

std::ostream& operator<<(std::ostream& out, const Fixed& value)
{
	out << value.toFloat();
	return (out);
}
//	STREAM INSERTION OVERLOAD
//  	makes CLASS behave like a native c++ type, manual print without calling .toFloat(); 
