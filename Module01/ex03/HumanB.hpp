/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/26 17:28:33 by limartin      #+#    #+#                 */
/*   Updated: 2022/03/28 13:56:24 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string> //string datatype
#include "Weapon.hpp"

class HumanB
{
	public:
	HumanB( std::string name);
	~HumanB();
	
	Weapon			getWeapon();
	void			setWeapon( Weapon toSet );
	void			attack();
	
	private:
	std::string	name;
	Weapon		Weapon;
};

#endif