/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 19:59:36 by limartin      #+#    #+#                 */
/*   Updated: 2022/03/24 19:40:27 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie* horde = NULL;
	horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name);
	}
	return (horde);
}

void	slayZombieHorde( Zombie* horde )
{
	delete[] horde;
	return;
}
