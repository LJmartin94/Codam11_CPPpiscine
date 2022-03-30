/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/30 13:29:06 by limartin      #+#    #+#                 */
/*   Updated: 2022/03/30 18:00:37 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name) 
: _name(name)
{
	return;
}

HumanB::~HumanB()
{
	return;
}
	
const Weapon*	HumanB::getWeapon() const
{
	const Weapon* toGet = this->_weapon;
	return(toGet);
}

void	HumanB::setWeapon( Weapon& toSet )
{
	this->_weapon = &toSet;
	return;
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with their " << this->getWeapon()->getType() << std::endl;
	return;
}
