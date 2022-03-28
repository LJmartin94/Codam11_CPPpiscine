/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/26 15:46:48 by limartin      #+#    #+#                 */
/*   Updated: 2022/03/28 15:17:21 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string toSet )
: type(toSet)
{
	return;
}

Weapon::~Weapon()
{
	return;
}

const std::string&	Weapon::getType()
{
	const std::string& ref = this->type;
	return(ref);
}

void				Weapon::setType( std::string toSet )
{
	this->type = toSet;
	return;
}
