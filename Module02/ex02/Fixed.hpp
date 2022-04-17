/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/10 13:56:48 by limartin      #+#    #+#                 */
/*   Updated: 2022/04/17 15:17:35 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream> //stream operators
#include <cmath> //roundf function

class Fixed
{
	public:
	Fixed( int n = 0 );								//Default OR Int Constructor
	Fixed( float n);								//Float Constructor
	Fixed( const Fixed& copy );						//Copy Constructor
	Fixed& operator= ( const Fixed& assignment );	//Assignment Operator Overload
	~Fixed();										//Destructor
	
	//ex01
	int		getRawBits( void ) const; //returns the raw value of the fixed-point value
	void	setRawBits( int const raw); //sets the raw value of the fixed-point number
	float	toFloat( void ) const;
	int		toInt( void ) const;

	//ex02
	
	// comparison ops
	Fixed	operator> ( const Fixed greaterThan );
	Fixed	operator< ( const Fixed lesserThan );
	Fixed	operator>= ( const Fixed greaterOrEqual );
	Fixed	operator<= ( const Fixed lesserOrEqual );
	Fixed	operator== ( const Fixed isEqual );
	Fixed	operator!= ( const Fixed isNotEqual );

	// arithmetic ops
	Fixed	operator+ ( const Fixed addendum );
	Fixed	operator- ( const Fixed subtrahendum );
	Fixed	operator* ( const Fixed multiplicandum );
	Fixed	operator/ ( const Fixed dividendum );

	// increment and decrement ops
	Fixed	operator++ ( int );	// postfix	i++
	Fixed	operator++ ();		// prefix	++i
	Fixed	operator-- ( int );	// postfix	i--
	Fixed	operator-- ();		// prefix	--i

	// min max functions
	static Fixed& min(Fixed& a, Fixed& b);
	static Fixed& min(const Fixed& a, const Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static Fixed& max(const Fixed& a, const Fixed& b);
	
	
	private:
	int 				_value;
	static const int	_fractionalBits = 8;
};

std::ostream& operator<< ( std::ostream& o, Fixed const & i);

#endif
