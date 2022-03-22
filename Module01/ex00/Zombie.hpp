/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 16:06:38 by limartin      #+#    #+#                 */
/*   Updated: 2022/03/22 17:56:10 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string> //string datatype
#include <iostream> //stream operators

class Zombie
{
	public:
	Zombie( std::string name );
	~Zombie();
	
	void	announce( void );

	private:
	std::string name; // should be _name but subject says "name"
};

#endif
