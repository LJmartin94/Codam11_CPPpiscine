/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/10 13:56:48 by limartin      #+#    #+#                 */
/*   Updated: 2022/05/31 15:58:02 by limartin      ########   odam.nl         */
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
	Fixed( float n );								//Float Constructor
	Fixed( const Fixed& copy );						//Copy Constructor
	Fixed& operator= ( const Fixed& assignment );	//Assignment Operator Overload
	~Fixed();										//Destructor
	
	//ex01
	int		getRawBits( void ) const; //returns the raw value of the fixed-point value
	void	setRawBits( int const raw ); //sets the raw value of the fixed-point number
	float	toFloat( void ) const;
	int		toInt( void ) const;

	//ex02

	// comparison ops
	bool	operator> ( const Fixed& greaterThan );
	bool	operator< ( const Fixed& lesserThan );
	bool	operator>= ( const Fixed& greaterOrEqual );
	bool	operator<= ( const Fixed& lesserOrEqual );
	bool	operator== ( const Fixed& isEqual );
	bool	operator!= ( const Fixed& isNotEqual );

	// arithmetic ops
	Fixed	operator+ ( const Fixed& addendum );
	Fixed	operator- ( const Fixed& subtrahendum );
	Fixed	operator* ( const Fixed& multiplicandum );
	Fixed	operator/ ( const Fixed& dividendum );

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
	static const int	_fractionalBits = 8;
};

std::ostream& operator<< ( std::ostream& o, Fixed const & i );

#endif
