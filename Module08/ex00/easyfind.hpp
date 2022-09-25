/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:42 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/26 00:32:40 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

class ElementNotFound : public std::exception
{
	public:
	const char *what() const throw()
	{
		return("Exception: Element not found in container.");
	}
};

template<typename T>
typename T::iterator easyfind(T container, int toFind);

# include "easyfind.tpp"

#endif
