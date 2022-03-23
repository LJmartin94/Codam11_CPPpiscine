/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 19:59:36 by limartin      #+#    #+#                 */
/*   Updated: 2022/03/23 18:19:38 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <vector>

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
