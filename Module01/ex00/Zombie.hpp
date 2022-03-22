/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 16:06:38 by limartin      #+#    #+#                 */
/*   Updated: 2022/03/22 16:13:38 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string> //string datatype

class Zombie
{
	public:
	Zombie();
	~Zombie();

	private:
	std::string name;
	void	announce(void);
};

#endif