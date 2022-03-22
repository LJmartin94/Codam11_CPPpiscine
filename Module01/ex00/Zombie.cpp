/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 16:06:12 by limartin      #+#    #+#                 */
/*   Updated: 2022/03/22 17:47:54 by limartin      ########   odam.nl         */
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

//PRIVATE
void Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...";
	return;
}
