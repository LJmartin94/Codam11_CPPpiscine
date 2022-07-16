/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/16 12:03:35 by limartin      #+#    #+#                 */
/*   Updated: 2022/07/16 12:21:33 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
    public:

    Fixed&  getPointX() const;
    void    setPointX( int n );
    void    setPointX( float n );
    void    setPointX( const Fixed& copy );

    Fixed&  getPointY() const;
    void    setPointY( int n );
    void    setPointY( float n );
    void    setPointY( const Fixed& copy );

    private:
    Fixed const _x;
    Fixed const _y;


};

#endif
