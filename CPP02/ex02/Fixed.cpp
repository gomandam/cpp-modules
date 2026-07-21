/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 00:45:00 by gomandam          #+#    #+#             */
/*   Updated: 2026/07/21 02:51:16 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int value)
{
	_fixedPointValue = value << _fractionalBits;			// << bit shift operator
}

Fixed::Fixed(const float value)
{
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
	this->_fixedPointValue = 0;
}

Fixed::~Fixed(void)
{
}

Fixed::Fixed(const Fixed & other)
{
	*this = other; // this->setRawBits(other.getRawBits());
	// calls assignment operator, uses other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& other)
{
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

// COMPARISON OPERATORS
// EXPLAIN: basic sequence of bool in relationship to OPERATORS > < ... from this-> pointer object _fpv to other._fpv
bool	Fixed::operator>(const Fixed& other) const
{	return (this->_fixedPointValue > other._fixedPointValue);	}

bool	Fixed::operator<(const Fixed& other) const
{	return (this->_fixedPointValue < other._fixedPointValue);	}

bool	Fixed::operator>=(const Fixed& other) const
{	return (this->_fixedPointValue >= other._fixedPointValue);	}

bool	Fixed::operator<=(const Fixed& other) const
{	return (this->_fixedPointValue <= other._fixedPointValue);	}

bool	Fixed::operator==(const Fixed& other) const
{	return (this->_fixedPointValue == other._fixedPointValue);	}

bool	Fixed::operator!=(const Fixed& other) const
{	return (this->_fixedPointValue != other._fixedPointValue);	}

// ARITHMETIC OPERATORS
// EXPLAIN: code snippets from each since it is just operators being changed + - and * /
Fixed	Fixed::operator+(const Fixed& other) const
{
	Fixed	result;
	result.setRawBits(this->_fixedPointValue + other._fixedPointValue);
	return (result);
}

Fixed	Fixed::operator-(const Fixed& other) const
{
	Fixed	result;
	result.setRawBits(this->_fixedPointValue - other._fixedPointValue);
	return (result);
}

Fixed	Fixed::operator*(const Fixed& other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed& other) const
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

// INCREMENT / DECREMENT OPERATORS
// EXPLAIN: Difference between Fixed& ++ -- and Fixed Fixed ++ -- then comparison by having to use temp

Fixed& Fixed::operator++(void)
{
	++this->_fixedPointValue;
	return (*this);
}

Fixed& Fixed::operator--(void)
{
	--this->_fixedPointValue;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);
	++this->_fixedPointValue;
	return (temp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);
	--this->_fixedPointValue;
	return (temp);
}

// STATIC	MIN / MAX
// EXPLAIN: ternary operators help simplify if else statements, why does const Fixed& makes a difference,  
// const Fixed& not modifiable, const reference
Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	return (a < b ? a : b);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a < b ? a : b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	return (a > b ? a : b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a > b ? a : b);
}

std::ostream& operator<<(std::ostream& out, const Fixed& value)
{
	out << value.toFloat();
	return (out);
}
//	STREAM INSERTION OVERLOAD
//  	makes CLASS behave like a native c++ type, manual print without calling .toFloat(); 
