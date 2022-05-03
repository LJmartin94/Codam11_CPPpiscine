/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/10 18:50:41 by limartin      #+#    #+#                 */
/*   Updated: 2022/05/03 17:38:18 by limartin      ########   odam.nl         */
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
	return;
}

//Float Constructor
Fixed::Fixed( float n )
: _value(n * (1 << _fractionalBits))
{
	std::cout << "Float constructor called (with value " << n << ")" << std::endl;
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
	return(this->_value);
}

//sets the raw value of the fixed-point number
void	Fixed::setRawBits( int const raw)
{
	this->_value = raw;
	return;
}

float	Fixed::toFloat( void ) const
{
	return( (float)(this->getRawBits()) / (1 << _fractionalBits) );
}

int		Fixed::toInt( void ) const
{
	return(this->getRawBits() >> this->_fractionalBits);
}

//ex02

// comparison ops

bool	Fixed::operator> ( Fixed const & greaterThan )
{
	return ((*this).getRawBits() > greaterThan.getRawBits());
}

bool	Fixed::operator< ( Fixed const & lesserThan )
{
	return ((*this).getRawBits() < lesserThan.getRawBits());
}

bool	Fixed::operator>= ( Fixed const & greaterOrEqual )
{
	return ((*this).getRawBits() >= greaterOrEqual.getRawBits());
}

bool	Fixed::operator<= ( Fixed const & lesserOrEqual )
{
	return ((*this).getRawBits() <= lesserOrEqual.getRawBits());
}

bool	Fixed::operator== ( Fixed const & isEqual )
{
	return ((*this).getRawBits() == isEqual.getRawBits());
}

bool	Fixed::operator!= ( Fixed const & isNotEqual )
{
	return ((*this).getRawBits() != isNotEqual.getRawBits());
}


// arithmetic ops

Fixed	Fixed::operator+ ( Fixed const & addendum )
{
	(void)addendum;
	return (*this);
}

Fixed	Fixed::operator- ( Fixed const & subtrahendum )
{
	(void)subtrahendum;
	return (*this);
}

Fixed	Fixed::operator* ( Fixed const & multiplicandum )
{
	(void)multiplicandum;
	return (*this);
}

Fixed	Fixed::operator/ ( Fixed const & dividendum )
{
	(void)dividendum;
	return (*this);
}


// increment and decrement ops

// postfix	i++
Fixed	Fixed::operator++ ( int )
{
	return (*this);
}

// prefix	++i
Fixed	Fixed::operator++ ()		
{
	return (*this);
}

// postfix	i--
Fixed	Fixed::operator-- ( int )	
{
	return (*this);
}

// prefix	--i
Fixed	Fixed::operator-- ()		
{
	return (*this);
}


// min max functions

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	(void)b;
	return (a);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	(void)b;
	return (a);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	(void)b;
	return (a);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	(void)b;
	return (a);
}


std::ostream& operator<< ( std::ostream& o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}
