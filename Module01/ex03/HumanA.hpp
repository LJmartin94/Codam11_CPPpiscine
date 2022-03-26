/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/26 17:16:06 by limartin      #+#    #+#                 */
/*   Updated: 2022/03/26 17:31:09 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string> //string datatype
#include "Weapon.hpp"

class HumanA
{
	public:
	HumanA( std::string name, Weapon weapon );
	~HumanA();
	
	void	setWeapon( Weapon toSet );
	Weapon	getWeapon();
	void	attack();
	
	private:
	std::string	name;
	Weapon		Weapon;
};

#endif