/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/26 17:28:33 by limartin      #+#    #+#                 */
/*   Updated: 2022/03/30 13:32:06 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string> //string datatype
#include <iostream> //stream operators
#include "Weapon.hpp"

class HumanB
{
	public:
	HumanB( std::string name);
	~HumanB();
	
	const Weapon	getWeapon() const;
	void			setWeapon( Weapon& toSet );
	void			attack();
	
	private:
	std::string	_name;
	Weapon		_weapon;
};

#endif
