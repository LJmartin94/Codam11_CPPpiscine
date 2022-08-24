/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/25 00:31:50 by lindsay       ########   odam.nl         */
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
	
	delete brian;
	return(0);
}