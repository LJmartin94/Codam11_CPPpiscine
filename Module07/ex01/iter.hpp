/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:42 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/25 16:14:31 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream> // Stream operators

template<typename ArrayType, typename fRet, typename fArgs>
void    iter(ArrayType* array, unsigned int len, fRet (*f)(fArgs))
{
    for (unsigned int i = 0; i < len; i++)
        (*f)(array[i]);
    return;
}

#endif
