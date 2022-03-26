/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/26 15:46:48 by limartin      #+#    #+#                 */
/*   Updated: 2022/03/26 15:54:55 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string&	Weapon::getType()
{
	std::string& ref = this->type;
	return(ref);
}

void				Weapon::setType(std::string toSet)
{
	this->type = toSet;
	return;
}
