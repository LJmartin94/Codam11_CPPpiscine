/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.tpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/27 16:59:53 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
typename T::iterator easyfind(T container, int toFind)
{
	typename T::iterator ret = std::find(container.begin(), container.end(), toFind);
	if (ret == container.end())
		throw(ElementNotFound());
	return(ret);
}
