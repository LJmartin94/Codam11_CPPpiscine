/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/10 13:56:48 by limartin      #+#    #+#                 */
/*   Updated: 2022/04/10 14:22:07 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public:
	//default constructor that initialises the fixed-point number value to 0
	Fixed();
	//copy constructor
	Fixed(const Fixed &copy);
	//copy assignment operator overload
	Fixed & operator = (const Fixed &assignment);
	//destructor
	~Fixed();
	
	int getRawBits( void ) const; //returns the raw value of the fixed-point value
	void setRawBits( int const raw); //sets the raw value of the fixed-point number
	
	private:
	int 				_value;
	static const int	_fractionalBits;
}

#endif
