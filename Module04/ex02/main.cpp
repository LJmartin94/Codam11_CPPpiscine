/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/25 18:56:22 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
	std::cout << "=TESTING BRAINS==================================================" << std::endl;
	Brain *brian = new Brain();

	std::cout << *brian << std::endl;

	for (int i = 0; i < BRAIN_SIZE; i++)
	{
		if (!(i % 1))
			brian->Set_idea(i, "This code looks amazing.");
		if (!(i % 2))
			brian->Set_idea(i, "I have such unique ideas.");
		if (!(i % 3))
			brian->Set_idea(i, "Inception was such a smart film.");
		if (!(i % 4))
			brian->Set_idea(i, "Did dinosaurs taste like chicken?");
		if (!(i % 5))
			brian->Set_idea(i, "I could totally beat a duck sized horse in a fight.");
		if (!(i % 6))
			brian->Set_idea(i, "Maybe I should sell my house and invest in doge coin.");
		if (!(i % 7))
			brian->Set_idea(i, "When you smell food, you're really just eating with your nose.");
		if (!(i % 8))
			brian->Set_idea(i, "This is an outstanding project.");
		if (!(i % 9))
			brian->Set_idea(i, "I should ring my mum soon.");
		if (!(i % 10))
			brian->Set_idea(i, "I reckon the Bahamas would be nice this time of year.");		
	}

	std::cout << *brian << std::endl;
	std::cout << brian->Get_idea(100) << std::endl;

	std::cout << "=TESTING CAT BRAINS==================================================" << std::endl;
	Cat *smartCat = new Cat();
	std::cout << *(smartCat->Get_brain());
	smartCat->Set_brain(brian);
	std::cout << *(smartCat->Get_brain());

	std::cout << "=TESTING ANIMAL BRAINS==================================================" << std::endl;
	Animal *smartAnimal = new Cat();
	std::cout << *(smartAnimal->Get_brain());
	smartAnimal->Set_brain(brian);
	std::cout << *(smartAnimal->Get_brain());

	std::cout << "=TESTING BRAINLESS ANIMAL BRAINS==================================================" << std::endl;
	// Animal *dumbAnimal = new Animal();
	// Brain *no_brain = dumbAnimal->Get_brain();
	// if (no_brain != NULL)
	// 	std::cout << *(dumbAnimal->Get_brain());
	// dumbAnimal->Set_brain(brian);

	std::cout << "=TESTING COPY CAT BRAINS==================================================" << std::endl;
	Cat *copyCat = new Cat(*smartCat);
	std::cout << *(copyCat->Get_brain());
	delete smartCat;
	std::cout << *(copyCat->Get_brain());

	std::cout << "=TESTING COPY ANIMAL BRAINS==================================================" << std::endl;
	Animal *copyAnimal = new Cat(*copyCat);
	std::cout << *(copyAnimal->Get_brain());
	delete copyCat;
	std::cout << *(copyAnimal->Get_brain());
	
	std::cout << "=CLEANING UP==================================================" << std::endl;
	delete copyAnimal;
	delete smartAnimal;
	// delete dumbAnimal;
	delete brian;

	std::cout << "=TESTS SPECIFIED BY SUBJECT==================================================" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "Now deleting:" << std::endl;
	delete j;
	delete i;

	std::cout << "=TESTS DESCRIBED BY SUBJECT==================================================" << std::endl;
		
	Animal* zoo[4];
	for (unsigned int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
	}
	zoo[0]->makeSound();

	for (unsigned int i = 0; i < 4; i++)
		delete zoo[i];

	// std::cout << "=ALTERNATE METHOD USING new[] AND delete[]==================================================" << std::endl;
	// //this only saves the animal part of the dog or cat though.
	// Animal* zoo2 = new Animal[4];
	// for (unsigned int i = 0; i < 4; i++)
	// {
	// 	if (i % 2 == 0)
	// 		zoo2[i] = Dog();
	// 	else
	// 		zoo2[i] = Cat();
	// }
	// zoo2[0].makeSound();
	// std::cout << zoo2[0].Get_type() << std::endl;
	// delete[] zoo2;
	return(0);
}