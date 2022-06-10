/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/10 13:56:48 by limartin      #+#    #+#                 */
/*   Updated: 2022/06/10 16:33:19 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream> //stream operators
#include <cmath> //roundf function, pow function
#include <iomanip> // std::setprecision (DEBUG ONLY)

class Fixed
{
	public:
	Fixed( int n = 0 );								//Default OR Int Constructor
	Fixed( float n );								//Float Constructor
	Fixed( const Fixed& copy );						//Copy Constructor
	Fixed& operator= ( const Fixed& assignment );	//Assignment Operator Overload
	~Fixed();										//Destructor
	
	//ex01
	int			getRawBits( void ) const; //returns the raw value of the fixed-point value
	void		setRawBits( int const raw ); //sets the raw value of the fixed-point number
	float		toFloat( void ) const;
	int			toInt( void ) const;
	std::string eightBitToString( void ) const; //custom display function that avoids float rounding
	std::string thirtytwoBitToString( void ) const; //custom display function that avoids float rounding

	//ex02

	// comparison ops
	bool	operator> ( const Fixed& greaterThan ) const;
	bool	operator< ( const Fixed& lesserThan ) const;
	bool	operator>= ( const Fixed& greaterOrEqual ) const;
	bool	operator<= ( const Fixed& lesserOrEqual ) const;
	bool	operator== ( const Fixed& isEqual ) const;
	bool	operator!= ( const Fixed& isNotEqual ) const;

	// arithmetic ops
	Fixed	operator+ ( const Fixed& addendum ) const;
	Fixed	operator- ( const Fixed& subtrahendum ) const;
	Fixed	operator* ( const Fixed& multiplicandum ) const;
	Fixed	operator/ ( const Fixed& dividendum ) const;

	// increment and decrement ops
	Fixed	operator++ ( int );	// postfix	i++
	Fixed&	operator++ ();		// prefix	++i
	Fixed	operator-- ( int );	// postfix	i--
	Fixed&	operator-- ();		// prefix	--i

	// min max functions
	static Fixed& min(Fixed& a, Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);
	

	private:
	int 				_value;
	static const int	_fractionalBits = 16; //can be set to anything between 0 and 18 incl.
};

std::ostream& operator<< ( std::ostream& o, Fixed const & i );

#endif
