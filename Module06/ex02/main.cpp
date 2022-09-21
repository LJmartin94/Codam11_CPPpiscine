/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/21 23:46:15 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"
#include <iostream> // Stream operators
#include <stdlib.h> // Rand function

Base *generate(void)
{
	switch (rand() % 3)
	{
	case 0:
		std::cout << "Generating class A! " << std::endl;
		return(new ClassA());

	case 1:
		std::cout << "Generating class B! " << std::endl;
		return(new ClassB());
	
	case 2:
		std::cout << "Generating class C! " << std::endl;
		return(new ClassC());

	default:
		std::cout << "Something went very wrong :S" << std::endl;
		return(NULL);
	}
}

int main(void)
{
	srand(time(NULL));
	
	std::cout << std::endl;
	Base *mystery = generate();
	std::cout << "Identify by pointer: " << std::endl;
	std::cout << "Identify by reference: " << std::endl;
	delete mystery;

	std::cout << std::endl;
	mystery = generate();
	std::cout << "Identify by pointer: " << std::endl;
	std::cout << "Identify by reference: " << std::endl;
	delete mystery;

	std::cout << std::endl;
	mystery = generate();
	std::cout << "Identify by pointer: " << std::endl;
	std::cout << "Identify by reference: " << std::endl;
	delete mystery;

	std::cout << std::endl;
	mystery = generate();
	std::cout << "Identify by pointer: " << std::endl;
	std::cout << "Identify by reference: " << std::endl;
	delete mystery;

	std::cout << std::endl;
	mystery = generate();
	std::cout << "Identify by pointer: " << std::endl;
	std::cout << "Identify by reference: " << std::endl;
	delete mystery;

	std::cout << std::endl;
	mystery = generate();
	std::cout << "Identify by pointer: " << std::endl;
	std::cout << "Identify by reference: " << std::endl;
	delete mystery;

	std::cout << std::endl;
	mystery = generate();
	std::cout << "Identify by pointer: " << std::endl;
	std::cout << "Identify by reference: " << std::endl;
	delete mystery;
	
	return(0);
}
