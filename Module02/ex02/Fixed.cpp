/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/10 18:50:41 by limartin      #+#    #+#                 */
/*   Updated: 2022/06/07 11:42:36 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Default and Int Constructor
Fixed::Fixed( int n )
: _value( n << _fractionalBits )
{
	// if (n)
	// 	std::cout << "Int constructor called (with value " << n << ")" << std::endl;
	// else
	// 	std::cout << "Default constructor called (with value " << n << ")" << std::endl;
	return;
}

//Float Constructor
Fixed::Fixed( float n )
: _value( n * (1 << _fractionalBits) )
{
	// std::cout << "Float constructor called (with value " << n << ")" << std::endl;
	return;
}

//Copy Constructor
Fixed::Fixed( const Fixed& copy )
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

//Assignment Operator Overload (to create deep copy)
Fixed& Fixed::operator= ( const Fixed& assignment )
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &assignment)
	{
		this->_value = assignment.getRawBits();
	}
	return(*this);
}

//Destructor
Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
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

std::string Fixed::toString( void ) const
{
	//set all bits that represent the integral part to 1, the rest to 0
	int int_mask = INT_MAX << (*this)._fractionalBits; 
	// store integral part of the first factor with bitwise AND
	int integral = (*this).getRawBits() & int_mask;
	// store fractional part of the number with bitwise XOR compared to the int
	int fractional = (*this).getRawBits() ^ integral;

 	std::string ret = std::to_string(integral >> (*this)._fractionalBits);
	if (fractional)
	{
		int bit_value = 128;
		int dec_value = 50000000;
		int str_value = 0;
		
		while (fractional > 0)
		{
			if (fractional >= bit_value)
			{
				str_value = str_value + dec_value;
				fractional = fractional - bit_value;
			}
			bit_value = bit_value / 2;
			dec_value = dec_value / 2;
		}

		ret = ret + ".";
		if (str_value < 12500000)
			ret = ret + "0";
		if (str_value <  1562500)
			ret = ret + "0";
		
		while (str_value % 10 == 0)
			str_value = str_value / 10;

		ret = ret + std::to_string(str_value);
	}
	return (ret);
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
	
	//set all bits that represent the integral part to 1, the rest to 0
	int int_mask = INT_MAX << (*this)._fractionalBits; 
	// store integral part of the first factor with bitwise AND
	int integral_a = (*this).getRawBits() & int_mask;
	// store fractional part of the number with bitwise XOR compared to the int
	int fractional_a = (*this).getRawBits() ^ integral_a;
	
	//do the same for the other factor in the product
	int integral_b = factor.getRawBits() & int_mask;
	int fractional_b = factor.getRawBits() ^ integral_b;

	//make a cross products of the two factors four component parts,
	//each time bitshifting only zero'd bits if possible.
	int sum_one = (integral_a >> (*this)._fractionalBits) * integral_b;
	int sum_two = fractional_a * (integral_b >> (*this)._fractionalBits);
	int sum_three = (integral_a >> (*this)._fractionalBits) * fractional_b;
	int sum_four = (fractional_a * fractional_b) >> (*this)._fractionalBits;
	product.setRawBits(sum_one + sum_two + sum_three + sum_four);

	sum_one = (integral_a >> (*this)._fractionalBits) * factor.getRawBits() + ((fractional_a * factor.getRawBits()) >> (*this)._fractionalBits);
	product.setRawBits(sum_one);

	product.setRawBits(this->getRawBits() * factor.toFloat());
	return (product);
}

Fixed	Fixed::operator/ ( const Fixed& divisor ) const
{
	Fixed quotient;
	long int fidelity;
	fidelity = (*this).getRawBits() * (1 << this->_fractionalBits);
	quotient.setRawBits( (int)(fidelity / divisor.getRawBits()) );
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
	// o << std::setprecision(8) << i.toFloat();
	o << i.toString();
	return (o);
}
