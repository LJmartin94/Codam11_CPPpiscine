/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/26 15:37:43 by limartin      #+#    #+#                 */
/*   Updated: 2022/03/26 16:33:49 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string> //string datatype

class Weapon
{
	public:
	Weapon( std::string toSet );
	~Weapon();

	const std::string&	Weapon::getType();
	void				Weapon::setType( std::string toSet );

	private:
	std::string type; //prefer the name _type
};

#endif