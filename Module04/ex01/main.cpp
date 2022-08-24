/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/24 23:57:01 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
	Brain *brian = new Brain();

	std::cout << *brian << std::endl;

	for (int i = 0; i < BRAIN_SIZE; i++)
		brian->Set_idea(i, "This code looks amazing.");

	std::cout << *brian << std::endl;
	
	delete brian;
	return(0);
}