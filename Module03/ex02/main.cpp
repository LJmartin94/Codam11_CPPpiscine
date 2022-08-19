/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/19 14:13:58 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap bob("Bob");
	std::cout << std::endl;

	FragTrap bla;
	std::cout << std::endl;
	
	FragTrap tom("Thomas", 5, 5, 1);
	std::cout << std::endl;

	bla = tom;
	std::cout << bla << std::endl;
	std::cout << std::endl;

	FragTrap jake;
	std::cout << jake << std::endl;

	FragTrap jerry(tom);
	jerry.Set_name("Gerald");
	jerry.highFivesGuys();
	jerry.highFivesGuys();
	jerry.highFivesGuys();
	jerry.highFivesGuys();
	std::cout << jerry << std::endl;

	jerry.takeDamage(100);
	std::cout << jerry << std::endl;
	std::cout << bla << std::endl;
	bla.takeDamage(100);
	std::cout << tom << std::endl;
	
	FragTrap boyo("Someone Else", 3, 3 ,3);
	boyo.takeDamage(3);
	boyo.beRepaired(3);
	boyo.takeDamage(3);
	boyo.attack("it doesn't matter who");
	boyo.highFivesGuys();
	boyo.highFivesGuys();
	boyo.highFivesGuys();
	boyo.highFivesGuys();
	std::cout << std::endl;

	FragTrap another("Bingus");
	another.takeDamage(1);
	another.beRepaired(11);
	another.takeDamage(10);
	std::cout << another << std::endl;

	FragTrap tiredSally("Tired Sally", 10, 1, 1);
	tiredSally.attack("her mother in law");
	tiredSally.attack("her mother in law");
	tiredSally.attack("her mother in law");
	tiredSally.highFivesGuys();
	tiredSally.highFivesGuys();
	tiredSally.highFivesGuys();
	tiredSally.highFivesGuys();
	std::cout << tiredSally << std::endl;
	
	return(0);
}
