/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 16:06:38 by limartin      #+#    #+#                 */
/*   Updated: 2022/03/23 18:13:46 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string> //string datatype
#include <iostream> //stream operators

class Zombie
{
	public:
	Zombie();
	Zombie( std::string name );
	~Zombie();
	
	void	announce( void );
	void	setName( std::string name );

	private:
	std::string name; // should be _name but subject says "name"
};

#endif
