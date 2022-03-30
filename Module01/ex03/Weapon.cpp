/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/26 15:46:48 by limartin      #+#    #+#                 */
/*   Updated: 2022/03/30 13:46:37 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	return;
}

Weapon::Weapon( std::string toSet )
: type(toSet)
{
	return;
}

Weapon::~Weapon()
{
	return;
}

const std::string&	Weapon::getType() const
{
	const std::string& ref = this->type;
	return(ref);
	// return (*this->type);
}

void				Weapon::setType( std::string toSet )
{
	this->type = toSet;
	return;
}
