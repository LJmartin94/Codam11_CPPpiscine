/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/18 17:08:42 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap bob("Bob");
	ClapTrap bla;
	ClapTrap tom("Thomas", 5, 5, 1);
	bla = tom;
	std::cout << bla << std::endl;

	ClapTrap jerry(tom);
	std::cout << jerry << std::endl;

	jerry.takeDamage(100);
	std::cout << jerry << std::endl;
	std::cout << bla << std::endl;
	bla.takeDamage(100);
	std::cout << tom << std::endl;
	
	ClapTrap boyo("Someone Else", 3, 3 ,3);
	boyo.takeDamage(3);
	boyo.beRepaired(3);
	boyo.takeDamage(3);
	boyo.attack("it doesn't matter who");
	std::cout << std::endl;

	ClapTrap another("Bingus");
	another.takeDamage(1);
	another.beRepaired(11);
	another.takeDamage(10);
	std::cout << another << std::endl;

	ClapTrap tiredSally("Tired Sally", 10, 1, 1);
	tiredSally.attack("her mother in law");
	tiredSally.attack("her mother in law");
	tiredSally.attack("her mother in law");
	std::cout << tiredSally << std::endl;
	
	return(0);
}