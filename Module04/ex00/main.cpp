/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/24 14:01:56 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TemplateClass.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	const WrongAnimal* w = new WrongCat();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << w->getType() << " " << std::endl;
	
	meta->makeSound();
	i->makeSound();
	j->makeSound();
	w->makeSound();

	delete meta;
	delete i;
	delete j;
	delete w;
	
	return(0);
}