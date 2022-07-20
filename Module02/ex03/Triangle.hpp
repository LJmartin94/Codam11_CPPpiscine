/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Triangle.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/20 17:36:41 by limartin      #+#    #+#                 */
/*   Updated: 2022/07/20 17:46:07 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRIANGLE_HPP
# define TRIANGLE_HPP

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point );

#endif