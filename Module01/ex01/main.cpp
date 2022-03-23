/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 16:15:24 by limartin      #+#    #+#                 */
/*   Updated: 2022/03/23 18:18:34 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name );

int		main(void)
{
	Zombie *horde = zombieHorde(3, "Bob");
	horde[0].announce();
	horde[1].announce();
	horde[2].announce();
	return (0);
}
