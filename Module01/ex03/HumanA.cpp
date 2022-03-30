/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/28 12:31:06 by limartin      #+#    #+#                 */
/*   Updated: 2022/03/30 17:50:49 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) 
: _name(name), _weapon(weapon)
{
	return;
}

HumanA::~HumanA()
{
	return;
}
	
const Weapon&	HumanA::getWeapon() const
{
	const Weapon& toGet = this->_weapon;
	return(toGet);
}

void	HumanA::setWeapon( Weapon& toSet )
{
	this->_weapon = toSet;
	return;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->getWeapon().getType() << std::endl;
	return;
}
