/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/24 21:09:40 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	const WrongAnimal* w = new WrongCat();

	std::cout << meta->Get_type() << " says ";
	meta->makeSound();
	
	std::cout << i->Get_type() << " says ";
	i->makeSound();

	std::cout << j->Get_type() << " says ";
	j->makeSound();

	std::cout << w->Get_type() << " says ";
	w->makeSound();

	std::cout << *meta;
	std::cout << *i;
	std::cout << *j;
	std::cout << *w;	

	delete meta;
	delete i;
	delete j;
	delete w;
	
	const WrongCat* ok = new WrongCat();
	std::cout << ok->Get_type() << " says ";
	ok->makeSound();
	std::cout << *ok;
	delete ok;

	return(0);
}