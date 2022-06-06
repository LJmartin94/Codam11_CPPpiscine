/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/10 18:50:41 by limartin      #+#    #+#                 */
/*   Updated: 2022/06/06 10:27:10 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Default and Int Constructor
Fixed::Fixed( int n )
: _value( n << _fractionalBits )
{
	if (n)
		std::cout << "Int constructor called (with value " << n << ")" << std::endl;
	else
		std::cout << "Default constructor called (with value " << n << ")" << std::endl;
	return;
}

//Float Constructor
Fixed::Fixed( float n )
: _value( n * (1 << _fractionalBits) )
{
	std::cout << "Float constructor called (with value " << n << ")" << std::endl;
	return;
}

//Copy Constructor
Fixed::Fixed( const Fixed& copy )
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
void	Fixed::setRawBits( int const raw )
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

bool	Fixed::operator> ( const Fixed& greaterThan ) const
{
	return ( (*this).getRawBits() > greaterThan.getRawBits() );
}

bool	Fixed::operator< ( const Fixed& lesserThan ) const
{
	return ( (*this).getRawBits() < lesserThan.getRawBits() );
}

bool	Fixed::operator>= ( const Fixed& greaterOrEqual ) const
{
	return ( (*this).getRawBits() >= greaterOrEqual.getRawBits() );
}

bool	Fixed::operator<= ( const Fixed& lesserOrEqual ) const
{
	return ( (*this).getRawBits() <= lesserOrEqual.getRawBits() );
}

bool	Fixed::operator== ( const Fixed& isEqual ) const
{
	return ( (*this).getRawBits() == isEqual.getRawBits() );
}

bool	Fixed::operator!= ( const Fixed& isNotEqual ) const
{
	return ( (*this).getRawBits() != isNotEqual.getRawBits() );
}


// arithmetic ops

Fixed	Fixed::operator+ ( const Fixed& addend ) const
{
	Fixed sum;
	sum.setRawBits( (*this).getRawBits() + addend.getRawBits() );
	return (sum);
}

Fixed	Fixed::operator- ( const Fixed& subtrahend ) const
{
	Fixed difference;
	difference.setRawBits( (*this).getRawBits() - subtrahend.getRawBits() );
	return (difference);
}

Fixed	Fixed::operator* ( const Fixed& factor ) const
{
	Fixed product;
	product.setRawBits( (*this).getRawBits() * factor.getRawBits() );
	return (product);
}

Fixed	Fixed::operator/ ( const Fixed& divisor ) const
{
	Fixed quotient;
	quotient.setRawBits( (*this).getRawBits() / divisor.getRawBits() );
	return (quotient);
}


// increment and decrement ops

// postfix	i++
Fixed	Fixed::operator++ ( int )
{
	Fixed postfixTemp = *this;
	this->setRawBits(this->getRawBits() + 1);
	return (postfixTemp);
}

// prefix	++i
Fixed&	Fixed::operator++ ()
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

// postfix	i--
Fixed	Fixed::operator-- ( int )
{
	Fixed postfixTemp = *this;
	this->setRawBits(this->getRawBits() - 1);
	return (postfixTemp);
}

// prefix	--i
Fixed&	Fixed::operator-- ()
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}


// min max functions

Fixed& Fixed::min( Fixed& a, Fixed& b )
{
	(void)b;
	return (a);
}

const Fixed& Fixed::min( const Fixed& a, const Fixed& b )
{
	(void)b;
	return (a);
}

Fixed& Fixed::max( Fixed& a, Fixed& b )
{
	(void)b;
	return (a);
}

const Fixed& Fixed::max( const Fixed& a, const Fixed& b )
{
	(void)b;
	return (a);
}

//Stream Operator Overload

std::ostream& operator<< ( std::ostream& o, const Fixed& i )
{
	o << i.toFloat();
	return (o);
}
