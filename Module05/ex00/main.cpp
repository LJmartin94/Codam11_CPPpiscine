/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/01 22:04:24 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "=STANDARD TESTS================================" << std::endl;
	Bureaucrat bob; 					//No args
	std::cout << bob;

	Bureaucrat frank("Frank"); 			//Only name
	std::cout << frank;

	Bureaucrat tom("Thomas", 69); 		//Name and grade
	std::cout << tom;
	
	Bureaucrat tomtom(tom);				// Copy constructor
	std::cout << tomtom;

	while(tom.Get_grade() > 1)			// Deep copy tester
	{
		tom.Increment_grade();
	}
	std::cout << "Tom's grade: " << tom;
	std::cout << "Tomtom's grade: " << tomtom;
	
	Bureaucrat jerry ("Gerald", 80);	//Assignment operator
	std::cout << jerry;
	jerry = tom;						
	std::cout << jerry;
	std::cout << std::endl;
	
	std::cout << "=EXCEPTION TESTS=(HIGH)========================" << std::endl;
	Bureaucrat high("Smart Sally", 1);
	std::cout << high; // Should be 1
	// high.Increment_grade(); // This would abort the program
	try
	{
		high.Increment_grade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << high; // Should still be 1, throw exception
	try
	{
		high.Decrement_grade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << high; // Should be 2
	std::cout << std::endl;
	
	std::cout << "=EXCEPTION TESTS=(LOW)=========================" << std::endl;
	Bureaucrat low("Dumb Derrick", 150);
	std::cout << low; // Should be 150
	// low.Decrement_grade(); // This would abort the program
	try
	{
		low.Decrement_grade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << low; // Should still be 150, throw exception
	try
	{
		low.Increment_grade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << low; // Should be 149
	std::cout << std::endl;

	std::cout << "=EXCEPTION TESTS=(INVALID CONSTRUCTOR PARAMS)==" << std::endl;
	try
	{
		Bureaucrat tooHigh("Nope", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat tooLow("Nope", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	return(0);
}
