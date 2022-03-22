/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 19:59:36 by limartin      #+#    #+#                 */
/*   Updated: 2022/03/22 21:14:16 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <vector>

Zombie*	zombieHorde( int N, std::string name )
{
	//Can't do this for a number of reasons. 
	//One problem we won't be able to solve is that variable length arrays are C99
	//		Zombie horde[N];

	//Can't do this because no default constructor exists for class Zombie
	//		Zombie* horde = NULL;
	// 		horde = new Zombie[N];

	//This works as a pointer to a single Zombie, but we need N zombies allocated at once.
	//		Zombie* horde = NULL;
	//		horde = new Zombie(name);

	//This gives two error messages, one relating to 'new' and one relating to '[N]'
	Zombie* horde = NULL;
	horde = new Zombie(name)[N];

	//Look at this tomorrow:
	// https://en.cppreference.com/w/cpp/language/new

	// Zombie (horde[N])(name);
	// Zombie (*horde)(name) = (new Zombie[N]);
	// *horde = (new Zombie(name))[N];
	// *horde = 

	// std::vector<Zombie> h(N, Zombie(name));
	// Zombie* horde = &(h[0]);
	return (horde);
}
