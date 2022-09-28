/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/28 02:46:50 by limartin      ########   odam.nl         */
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

	std::cout << std::endl;
	std::cout << "TESTING SPAN FUNCTIONS=======================================" << std::endl;

	std::cout << std::endl << "Largest possible span:" << std::endl;
	Span minmax;
	minmax.addNumber(INT_MIN);
	std::cout << minmax;
	minmax.addNumber(INT_MAX);
	std::cout << minmax;
	std::cout << "Longest  gives: " << minmax.longestSpan() << std::endl;
	std::cout << "Shortest gives: " << minmax.shortestSpan() << std::endl;

	std::cout << std::endl << "Smallest possible span:" << std::endl;
	Span minmin;
	minmin.addNumber(INT_MIN);
	minmin.addNumber(INT_MIN);
	std::cout << minmin;
	std::cout << "Longest  gives: " << minmin.longestSpan() << std::endl;
	std::cout << "Shortest gives: " << minmin.shortestSpan() << std::endl;

	std::cout << std::endl << "All together:" << std::endl;
	Span minmaxmaxmin(4);
	minmaxmaxmin.addNumber(INT_MIN);
	minmaxmaxmin.addNumber(INT_MAX);
	minmaxmaxmin.addNumber(INT_MAX);
	minmaxmaxmin.addNumber(INT_MIN);
	std::cout << minmaxmaxmin;
	std::cout << "Smallest: " << minmaxmaxmin.shortestSpan() << std::endl;
	std::cout << "Largest:  " << minmaxmaxmin.longestSpan() << std::endl;

	std::cout << std::endl << "Largest vals have smallest diff, smallest vals have largest diff:" << std::endl;
	Span testymctest(7);
	testymctest.addNumber(0);
	testymctest.addNumber(5);
	testymctest.addNumber(8);
	testymctest.addNumber(12);
	testymctest.addNumber(14);
	testymctest.addNumber(15);
	std::cout << testymctest;
	std::cout << "Smallest: " << testymctest.shortestSpan() << std::endl;
	std::cout << "Largest:  " << testymctest.longestSpan() << std::endl;
  
	std::cout << std::endl;
	std::cout << "=============================================================" << std::endl;

	std::cout << std::endl;
	std::cout << "TESTING EXCEPTIONS=======================================" << std::endl;

	std::cout << std::endl;
	std::cout << "Span of zero length (this is allowed, even though it is unusable):" << std::endl;
	Span zeroSpan(0);
	std::cout << zeroSpan;
	std::cout << "First we try adding a number (but this fails):" << std::endl;
	try
	{
		zeroSpan.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Then we try shortestSpan and longestSpan (these both fail):" << std::endl;
	try
	{
		std::cout << zeroSpan.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << zeroSpan.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	std::cout << std::endl;
	std::cout << "Span of one length (this is allowed, even though shortestSpan and longestSpan will be unusable):" << std::endl;
	Span oneSpan(1);
	std::cout << oneSpan;
	std::cout << "Now we add a number (42 ofc):" << std::endl;
	oneSpan.addNumber(42);
	std::cout << oneSpan;
	std::cout << "Then we try shortestSpan and longestSpan (these both fail):" << std::endl;
	try
	{
		std::cout << oneSpan.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << oneSpan.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << std::endl;
	std::cout << "Now we test a Span class that has enough size (>=2), but not enough actual numbers added to it:" << std::endl;
	Span largeButUninitialisedSpan(42);
	std::cout << "When it is empty, we cannot use shortestSpan or longestSpan:" << std::endl;
	std::cout << largeButUninitialisedSpan;
	try
	{
		std::cout << largeButUninitialisedSpan.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << largeButUninitialisedSpan.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "When it contains only one number, we cannot use shortestSpan or longestSpan:" << std::endl;
	largeButUninitialisedSpan.addNumber(42);
	std::cout << largeButUninitialisedSpan;
	try
	{
		std::cout << largeButUninitialisedSpan.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << largeButUninitialisedSpan.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Only when we add another number does it work:" << std::endl;
	largeButUninitialisedSpan.addNumber(45);
	std::cout << largeButUninitialisedSpan;
	try
	{
		std::cout << "Shortest span is: " << largeButUninitialisedSpan.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "Longest span is:  " << largeButUninitialisedSpan.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	std::cout << "=============================================================" << std::endl;

	return(0);
}
