/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 16:15:24 by limartin      #+#    #+#                 */
/*   Updated: 2022/03/22 19:37:40 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int		main(void)
{
	Zombie* newZ;
	
	randomChump("Fred");
	newZ = newZombie("Shaggy");
	(*newZ).announce();
	delete newZ;
	return (0);
}
