/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/26 17:16:06 by limartin      #+#    #+#                 */
/*   Updated: 2022/03/30 13:28:06 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string> //string datatype
#include <iostream> //stream operators
#include "Weapon.hpp"

class HumanA
{
	public:
	HumanA( std::string name, Weapon& weapon );
	~HumanA();
	
	const Weapon&	getWeapon() const;
	void			setWeapon( Weapon& toSet );
	void			attack();
	
	private:
	std::string	_name;
	Weapon		_weapon;
};

#endif
