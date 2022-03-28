/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/28 12:31:06 by limartin      #+#    #+#                 */
/*   Updated: 2022/03/28 15:16:42 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon::Weapon weapon ) 
: name(name), Weapon(weapon)
{
	return;
}

HumanA::~HumanA()
{
	return;
}
	
const Weapon&	HumanA::getWeapon()
{
	const Weapon::Weapon& toGet = this->Weapon;
	return(toGet);
}

void	HumanA::setWeapon( Weapon::Weapon toSet )
{
	this->Weapon = toSet;
	return;
}

void	HumanA::attack()
{
	// const Weapon::Weapon& ref = this->getWeapon();
	// std::cout << this->name << " attacks with their " << ref.getType();
	std::cout << this->name << " attacks with their " << this->getWeapon().getType();

	// Compiler no likey how I'm using const here 
	// so I guess I better read documentation about how const works :/
	// https://www.geeksforgeeks.org/const-keyword-in-cpp/
}
