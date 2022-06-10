/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/10 18:50:41 by limartin      #+#    #+#                 */
/*   Updated: 2022/06/10 14:21:56 by limartin      ########   odam.nl         */
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

std::string Fixed::eightBitToString( void ) const
{
	if ( (*this)._fractionalBits <= 0)
		return (std::to_string( (*this).getRawBits() ));
	if ( (*this)._fractionalBits > 19)
		return (std::to_string( (*this).toFloat() ));
	
	//set all bits that represent the integral part to 1, the rest to 0
	int int_mask = INT_MAX << (*this)._fractionalBits; 
	// store integral part of the first factor with bitwise AND
	int integral = (*this).getRawBits() & int_mask;
	// store fractional part of the number with bitwise XOR compared to the int
	int fractional = (*this).getRawBits() ^ integral;

 	std::string ret = std::to_string(integral >> (*this)._fractionalBits);
	if (fractional)
	{
		// Calculate the decimal number that represents the fractional portion of the string
		unsigned long int answer = pow(10, (*this)._fractionalBits) * (fractional / pow(2, (*this)._fractionalBits));
		
		// Find leading zeros
		int digits = 0;
		for (int i = 0; answer >= pow(10,i); i++)
			digits++;
		int zero_pad = (*this)._fractionalBits - digits;

		// Remove trailing zeros
		while (answer % 10 == 0 && answer != 0)
			answer = answer / 10;
		
		// Create the fractional portion of the string
		ret = ret + ".";
		while (zero_pad)
		{
			ret = ret + "0";
			zero_pad--;
		}
		ret = ret + std::to_string(answer);
	}
	return (ret);
}

std::string Fixed::thirtytwoBitToString( void ) const
{
	const int fbits = (*this)._fractionalBits; //abbreviation for convenience
	
	//if there are no bits to store fractional info, 
	//the number simply is the integer that was passed
	if ( fbits <= 0) 
		return (std::to_string( (*this).getRawBits() ));
	
	//set all bits that represent the integral part to 1, the rest to 0
	int int_mask = INT_MAX << fbits; 
	// store integral part of the first factor with bitwise AND
	int integral = (*this).getRawBits() & int_mask;
	// store fractional part of the number with bitwise XOR compared to the int
	int fractional = (*this).getRawBits() ^ integral;

 	std::string ret = std::to_string(integral >> fbits);
	if (fractional)
	{
		std::string			computation_str = "0";
		std::string			to_add = "5";
		to_add[0] = to_add[0] - '0';

		for (int decimal_place = 1; decimal_place <= fbits; decimal_place++)
		{
			// Pad ascii chars
			for(std::string::iterator first_digit = to_add.begin(); first_digit != to_add.end(); ++first_digit)
				*first_digit = *first_digit + '0';
			// std::cout << std::endl << "Begin comp str:        " << computation_str << std::endl;
			// std::cout << "to_add this iteration: " << to_add << std::endl;
			// Strip all chars in string of ascii padding
			for(std::string::iterator first_digit = to_add.begin(); first_digit != to_add.end(); ++first_digit)
				*first_digit = *first_digit - '0';

			int bit_value = pow(2, (fbits - decimal_place)); //the value of a bit at this decimal place
			if (fractional >= bit_value)
			{
				// Strip all chars in string of ascii padding
				for(std::string::iterator first_digit = computation_str.begin(); first_digit != computation_str.end(); ++first_digit)
					*first_digit = *first_digit - '0';

				//add to_add to computation_str
				std::string::reverse_iterator i = computation_str.rbegin();
				std::string::reverse_iterator j = to_add.rbegin();
				while(i < computation_str.rend() && j < to_add.rend())
				{
					*i = *i + *j;
					i++;
					j++;
				}
				
				// carry overflowed numbers from right to left
				for(std::string::reverse_iterator last_digit = computation_str.rbegin(); last_digit < computation_str.rend(); ++last_digit)
				{
					*(last_digit + 1) = *(last_digit + 1) + *last_digit / 10;
					*last_digit = *last_digit % 10;
				}

				// Pad ascii chars
				for(std::string::iterator first_digit = computation_str.begin(); first_digit != computation_str.end(); ++first_digit)
					*first_digit = *first_digit + '0';
				
				fractional = fractional - bit_value;
				if ( fractional == 0) // when the bits in the fractional part are all 0, we can stop
					break;
			}
			// std::cout << "End comp str:          " << computation_str << std::endl;


			computation_str = computation_str + "0";
			to_add = "0" + to_add;
			to_add[0] = to_add[0] - '0';
			//Multiplication on string x5
			for(std::string::reverse_iterator last_digit = to_add.rbegin(); last_digit != to_add.rend(); ++last_digit)
			{
				*last_digit = *last_digit * 5;
			}
			// carry overflowed numbers from right to left
			for(std::string::reverse_iterator last_digit = to_add.rbegin(); last_digit < to_add.rend(); ++last_digit)
			{
				*(last_digit + 1) = *(last_digit + 1) + *last_digit / 10;
				*last_digit = *last_digit % 10;
			}
		}
		ret = ret + ".";
		ret = ret + computation_str;
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
	o << "Float: " << std::setprecision(31) << i.toFloat() << " ";
	// o << i.eightBitToString();
	o << "String: " << i.thirtytwoBitToString() << " ";
	return (o);
}
