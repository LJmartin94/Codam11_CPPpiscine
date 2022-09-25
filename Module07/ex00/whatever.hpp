/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:42 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/25 14:52:06 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream> // Stream operators

template<typename T>
void    swap(T& x, T& y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
    return;
}

template<typename T>
T   min(const T& x, const T& y)
{
    if(x < y)
        return x;
    return y;
}

template<typename T>
T   max(const T& x, const T& y)
{
    if(x > y)
        return x;
    return y;
}

#endif
