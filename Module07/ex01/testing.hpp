/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   testing.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/25 15:42:55 by limartin      #+#    #+#                 */
/*   Updated: 2022/09/25 16:24:19 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTING_HPP
# define TESTING_HPP

#include <iostream> // Stream operators

template<typename T>
void    templateShow(T& arrayContents)
{
    std::cout << arrayContents << std::endl;
    return;
}

template<typename T>
std::string templateIncrement(T& arrayContents)
{
    (arrayContents)++;
    return("Yes.");
}

#endif