/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/30 13:29:06 by limartin      #+#    #+#                 */
/*   Updated: 2022/03/30 13:47:40 by limartin      ########   odam.nl         */
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
	
const Weapon	HumanB::getWeapon() const
{
	const Weapon toGet = this->_weapon;
	return(toGet);
	// return(*this->Weapon);
}

void	HumanB::setWeapon( Weapon& toSet )
{
	this->_weapon = toSet;
	return;
}

void	HumanB::attack()
{
	// const Weapon::Weapon& ref = this->getWeapon();
	// std::cout << this->name << " attacks with their " << ref.getType();
	std::cout << this->_name << " attacks with their " << this->getWeapon().getType() << std::endl;

	// Compiler no likey how I'm using const here 
	// so I guess I better read documentation about how const works :/
	// https://www.geeksforgeeks.org/const-keyword-in-cpp/
}
