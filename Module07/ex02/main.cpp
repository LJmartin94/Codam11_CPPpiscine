/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/25 22:26:32 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
// #include "Array.tpp"

int main(void)
{
	std::cout << std::endl;
	std::cout << "TESTING WITH INTS==============================" << std::endl;
	Array<int> intTest(5);
	for (unsigned int i = 0; i < intTest.size(); i++)
		intTest[i] = i;
	std::cout << intTest;

	std::cout << "TESTING WITH CHARS=============================" << std::endl;
	Array<char> charTest(5);
	for (unsigned int i = 0; i < charTest.size(); i++)
		charTest[i] = i + 'a';
	std::cout << charTest;

	std::cout << "TESTING WITH COPIES============================" << std::endl;
	std::cout << "Second int array:" << std::endl;
	Array<int> anotherIntTest(5);
	for (unsigned int i = 0; i < anotherIntTest.size(); i++)
		anotherIntTest[i] = i + 42;
	std::cout << anotherIntTest;

	std::cout << "Overwriting second int array with first:" << std::endl;
	anotherIntTest = intTest;
	std::cout << anotherIntTest;


	std::cout << "Changing first array, then showing both:" << std::endl;
	for (unsigned int i = 0; i < intTest.size(); i++)
		intTest[i] = i + 1000;
	std::cout << "Original (now changed):" << std::endl;
	std::cout << intTest;
	std::cout << "Copy (unchanged):" << std::endl;	
	std::cout << anotherIntTest;

	std::cout << "TESTING COPY CONSTRUCTOR=======================" << std::endl;
	Array<int> copy(intTest);
	std::cout << copy << std::endl;

	std::cout << "TESTING MY OWN CONSTRUCTOR=====================" << std::endl;
	Array<int> fortyTwo(4, 42);
	std::cout << fortyTwo << std::endl;

	std::cout << "TESTING DEFAULT VALUES ========================" << std::endl;
	Array<> smart; 
	// Without specifying any values, template typename T defaults to int, 
	// and size defaults to 3.
	smart[0] = 42;
	smart[1] = '*';
	smart[2] = '*';
	std::cout << smart;

	// intTest = charTest; // Not allowed
	return(0);
}
