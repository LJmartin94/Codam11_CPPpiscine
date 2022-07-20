/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/16 12:03:21 by limartin      #+#    #+#                 */
/*   Updated: 2022/07/20 18:06:32 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//     Point& operator= ( const Point& assignment );	// Assignment Operator Overload.
//     ~Point();                                       // Default destructor.

//     Fixed&  getPointX() const; // X getters and setters.
//     void    setPointX( const Fixed& copy );
//     void    setPointX( int n );
//     void    setPointX( float n );

//     Fixed&  getPointY() const; // Y getters and setters.
//     void    setPointY( const Fixed& copy );
//     void    setPointY( int n );
//     void    setPointY( float n );

//     private:
//     Fixed const _x;
//     Fixed const _y;

//     // https://print-graph-paper.com/virtual-graph-paper



// Default Constructor
Point::Point() //check if this works lmao
: _x(Fixed(0)), _y(Fixed(0))
{
    return;
}

// Parameterised Constructor
Point::Point( Fixed x, Fixed y)
: _x(x), _y(y)
{
    return;
}

// Copy Constructor
Point::Point( const Point& copy )
{
	*this = copy;
	return;
}

// Assignment Operator Overload (to create deep copy)
Point& Point::operator= ( const Point& assignment )
{
	if (this != &assignment)
	{
		this->_x = assignment.getPointX();
	}
	return(*this);
}
