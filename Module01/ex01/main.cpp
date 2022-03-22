/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 16:15:24 by limartin      #+#    #+#                 */
/*   Updated: 2022/03/22 20:19:16 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name );

int		main(void)
{
	Zombie *horde = zombieHorde(3, "Bob");
	horde->announce();
	return (0);
}
