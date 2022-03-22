/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 16:06:12 by limartin      #+#    #+#                 */
/*   Updated: 2022/03/22 19:39:05 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//PUBLIC
Zombie::Zombie( std::string name )
: name(name)
{
	std::cout << "Zombie " << this->name << " created." << std::endl;
	return;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->name << " decomposed." << std::endl;
	return;
}

void Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}

//PRIVATE
