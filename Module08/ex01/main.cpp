/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/27 23:34:24 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	std::cout << std::endl;
	
	std::cout << "BASIC TESTING CONSTRUCTORS===================================" << std::endl;
	
	std::cout << std::endl << "Unparameterised (default size 2): " << std::endl;
	Span testing;
	testing.addNumber(4242);
	testing.addNumber(3);
	std::cout << testing;

	std::cout << std::endl << "Copy constructor: " << std::endl;
	Span copy(testing);
	std::cout << copy;

	std::cout << std::endl << "Parameterised (size 4) && throwing exceptions: " << std::endl;
	Span four(4);
	four.addNumber(1);
	four.addNumber(2);
	four.addNumber(3);
	four.addNumber(4);
	std::cout << four;
	try
	{
		four.addNumber(5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << four;
	std::cout << "=============================================================" << std::endl;

	
	std::cout << std::endl;
	std::cout << "MAIN SPECIFIED BY SUBJECT====================================" << std::endl;
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "=============================================================" << std::endl;

	std::cout << std::endl;
	std::cout << "TESTING ADD NUMBER (with iterators)==========================" << std::endl;
	// {65, 899, 3, 2, 5, 7}
	std::vector<int> theseNumbers;
	theseNumbers.push_back(65);
	theseNumbers.push_back(899);
	theseNumbers.push_back(3);
	theseNumbers.push_back(2);
	theseNumbers.push_back(5);
	theseNumbers.push_back(7);
	
	std::cout << std::endl;
	std::cout << "Adding six numbers to an empty Span(6) class. (SHOULD FIT)" << std::endl;
	Span six(6);
	six.addNumber(theseNumbers.begin(), theseNumbers.end());
	std::cout << six;

	std::cout << std::endl;
	std::cout << "Adding six numbers to a Span(7) class that contains '42' already. (SHOULD FIT)" << std::endl;
	Span seven(7);
	seven.addNumber(42);
	seven.addNumber(theseNumbers.begin(), theseNumbers.end());
	std::cout << seven;

	std::cout << std::endl;
	std::cout << "Adding six numbers to an empty Span(5) class. (SHOULDNT FIT)" << std::endl;
	Span five(5);
	try
	{
		five.addNumber(theseNumbers.begin(), theseNumbers.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << five;

	std::cout << std::endl;
	std::cout << "Adding six numbers to a Span(6) class that contains '42' already. (SHOULDNT FIT)" << std::endl;
	Span filledSix(6);
	filledSix.addNumber(42);
	try
	{
		filledSix.addNumber(theseNumbers.begin(), theseNumbers.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << filledSix;


	std::cout << "=============================================================" << std::endl;

	return(0);
}
