/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/10 18:50:41 by limartin      #+#    #+#                 */
/*   Updated: 2022/04/13 19:33:18 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Default and Int Constructor
Fixed::Fixed( int n )
: _value(n << _fractionalBits)
{
	if (n)
		std::cout << "Int constructor called (with value " << n << ")" << std::endl;
	else
		std::cout << "Default constructor called (with value " << n << ")" << std::endl;
	std::cout << std::bitset<32>(n) << std::endl;
	std::cout << std::bitset<32>(_value) << std::endl;
	return;
}

//Float Constructor
Fixed::Fixed( float n )
: _value(n)
{
	std::cout << "Float constructor called (with value " << n << ")" << std::endl;
	// std::cout << std::bitset<32>(n) << std::endl;
	// std::cout << std::bitset<32>(_value) << std::endl;
	float leftover = n - roundf(n);
	std::cout << "Float:" << n << std::endl;
	std::cout << "Float leftover:" << leftover << std::endl;
	return;
}

//Copy Constructor
Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

//Assignment Operator Overload (to create deep copy)
Fixed& Fixed::operator= ( const Fixed& assignment )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &assignment)
	{
		this->_value = assignment.getRawBits();
	}
	return(*this);
}

//Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

//returns the raw value of the fixed-point value
int		Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return(this->_value);
}

//sets the raw value of the fixed-point number
void	Fixed::setRawBits( int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
	return;
}

float	Fixed::toFloat( void ) const
{
	return((float)this->getRawBits());
}

int		Fixed::toInt( void ) const
{
	return(this->getRawBits());
}

std::ostream& operator<< ( std::ostream& o, Fixed const & i)
{
	o << i.getRawBits();
	return (o);
}
