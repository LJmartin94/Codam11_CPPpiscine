/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/10 13:56:48 by limartin      #+#    #+#                 */
/*   Updated: 2022/04/13 16:32:38 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream> //stream operators

class Fixed
{
	public:
	Fixed( int n = 0 );								//Default OR Int Constructor
	Fixed( float n);								//Float Constructor
	Fixed( const Fixed& copy );						//Copy Constructor
	Fixed& operator= ( const Fixed& assignment );	//Assignment Operator Overload
	~Fixed();										//Destructor
	
	int		getRawBits( void ) const; //returns the raw value of the fixed-point value
	void	setRawBits( int const raw); //sets the raw value of the fixed-point number
	float	toFloat( void ) const;
	int		toInt( void ) const;
	
	private:
	int 				_value;
	static const int	_fractionalBits = 8;
};

std::ostream& operator<< ( std::ostream& o, Fixed const & i);

#endif
