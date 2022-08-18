/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/18 16:41:43 by lindsay       ########   odam.nl         */
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
	return(0);
}