/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/22 00:02:49 by limartin      ########   odam.nl         */
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

void identify(Base* p)
{
	if (dynamic_cast<ClassA*>(p) != NULL)
		std::cout << "A";
	else if (dynamic_cast<ClassB*>(p) != NULL)
		std::cout << "B";
	else if (dynamic_cast<ClassC*>(p) != NULL)
		std::cout << "C";
	return;
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<ClassA&>(p);
		std::cout << "A";
		return;
	}
	catch(const std::exception& e)
	{
		e.what(); //we can just ignore the exception
	}
	try
	{
		(void)dynamic_cast<ClassB&>(p);
		std::cout << "B";
		return;
	}
	catch(const std::exception& e)
	{
		e.what(); //we can just ignore the exception
	}
	try
	{
		(void)dynamic_cast<ClassC&>(p);
		std::cout << "C";
		return;
	}
	catch(const std::exception& e)
	{
		e.what(); //we can just ignore the exception
	}
	return;
}


int main(void)
{
	srand(time(NULL));
	
	std::cout << std::endl;
	Base *mystery = generate();
	std::cout << "Identify by pointer: ";
	identify(mystery);
	std::cout << std::endl;
	std::cout << "Identify by reference: ";
	identify(*mystery); 
	std::cout << std::endl;
	delete mystery;

	std::cout << std::endl;
	mystery = generate();
	std::cout << "Identify by pointer: ";
	identify(mystery);
	std::cout << std::endl;
	std::cout << "Identify by reference: ";
	identify(*mystery); 
	std::cout << std::endl;
	delete mystery;

	std::cout << std::endl;
	mystery = generate();
	std::cout << "Identify by pointer: ";
	identify(mystery);
	std::cout << std::endl;
	std::cout << "Identify by reference: ";
	identify(*mystery); 
	std::cout << std::endl;
	delete mystery;

	std::cout << std::endl;
	mystery = generate();
	std::cout << "Identify by pointer: ";
	identify(mystery);
	std::cout << std::endl;
	std::cout << "Identify by reference: ";
	identify(*mystery); 
	std::cout << std::endl;
	delete mystery;

	std::cout << std::endl;
	mystery = generate();
	std::cout << "Identify by pointer: ";
	identify(mystery);
	std::cout << std::endl;
	std::cout << "Identify by reference: ";
	identify(*mystery); 
	std::cout << std::endl;
	delete mystery;

	std::cout << std::endl;
	mystery = generate();
	std::cout << "Identify by pointer: ";
	identify(mystery);
	std::cout << std::endl;
	std::cout << "Identify by reference: ";
	identify(*mystery); 
	std::cout << std::endl;
	delete mystery;

	std::cout << std::endl;
	mystery = generate();
	std::cout << "Identify by pointer: ";
	identify(mystery);
	std::cout << std::endl;
	std::cout << "Identify by reference: ";
	identify(*mystery); 
	std::cout << std::endl;
	delete mystery;
	
	return(0);
}
