/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/19 11:01:25 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap bob("Bob");
	std::cout << std::endl;

	ScavTrap bla;
	std::cout << std::endl;
	
	ScavTrap tom("Thomas", 5, 5, 1);
	std::cout << std::endl;

	bla = tom;
	std::cout << bla << std::endl;
	std::cout << std::endl;

	ScavTrap jake;
	std::cout << jake << std::endl;

	ScavTrap jerry(tom);
	jerry.Set_name("Gerald");
	std::cout << jerry << std::endl;

	jerry.takeDamage(100);
	std::cout << jerry << std::endl;
	std::cout << bla << std::endl;
	bla.takeDamage(100);
	std::cout << tom << std::endl;
	
	ScavTrap boyo("Someone Else", 3, 3 ,3);
	boyo.takeDamage(3);
	boyo.beRepaired(3);
	boyo.takeDamage(3);
	boyo.attack("it doesn't matter who");
	std::cout << std::endl;

	ScavTrap another("Bingus");
	another.takeDamage(1);
	another.beRepaired(11);
	another.takeDamage(10);
	std::cout << another << std::endl;

	ScavTrap tiredSally("Tired Sally", 10, 1, 1);
	tiredSally.attack("her mother in law");
	tiredSally.attack("her mother in law");
	tiredSally.attack("her mother in law");
	std::cout << tiredSally << std::endl;
	
	return(0);
}