/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/20 18:12:11 by limartin      #+#    #+#                 */
/*   Updated: 2022/07/20 18:12:58 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:

	Point();										// Default constructor.
	Point( Fixed x, Fixed y );					  	// Parameterised constructor.
	Point( const Point& copy );					 	// Copy constructor.
	Point& operator= ( const Point& assignment );	// Assignment Operator Overload.
	~Point();										// Default destructor.

	const Fixed& 	getPointX() const; // X getters and setters.
	void			setPointX( const Fixed& copy );
	void			setPointX( int n );
	void			setPointX( float n );

	const Fixed&	getPointY() const; // Y getters and setters.
	void			setPointY( const Fixed& copy );
	void			setPointY( int n );
	void			setPointY( float n );

	private:
	Fixed const _x;
	Fixed const _y;

	// https://print-graph-paper.com/virtual-graph-paper

};

#endif
