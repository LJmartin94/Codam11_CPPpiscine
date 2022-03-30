/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/28 12:31:06 by limartin      #+#    #+#                 */
/*   Updated: 2022/03/30 13:48:10 by limartin      ########   odam.nl         */
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
	// return(*this->Weapon);
}

void	HumanA::setWeapon( Weapon& toSet )
{
	this->_weapon = toSet;
	return;
}

void	HumanA::attack()
{
	// const Weapon::Weapon& ref = this->getWeapon();
	// std::cout << this->name << " attacks with their " << ref.getType();
	std::cout << this->_name << " attacks with their " << this->getWeapon().getType() << std::endl;

	// Compiler no likey how I'm using const here 
	// so I guess I better read documentation about how const works :/
	// https://www.geeksforgeeks.org/const-keyword-in-cpp/
}
