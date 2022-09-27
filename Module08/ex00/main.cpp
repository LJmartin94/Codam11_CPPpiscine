/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/27 17:54:03 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream> // Stream operators
#include <iomanip> // Padding in 'show' function

void show(const int &n)
{
	std::cout << "|";
	std::cout.fill(' ');
	std::cout.width(3);
	std::cout << std::right << n;
	return;
}

int main(void)
{
	std::vector<int> v;
	v.push_back(0);		//index 0
	v.push_back(1);		//index 1
	v.push_back(2);		//index 2
	v.push_back(10);	//index 3	// First occurrence
	v.push_back(3);		//index 4
	v.push_back(4);		//index 5
	v.push_back(5);		//index 6
	v.push_back(10); 	//index 7	// Second occurrence
	v.push_back(6);		//index 8
	v.push_back(7);		//index 9
	v.push_back(8);		//index 10
	v.push_back(9);		//index 11
	v.push_back(42); 	//index 12	// Last element

	// We make easyfind return an iterator to the first element
	// for debug purposes of displaying the index.
	std::vector<int>::iterator firstIndex = easyfind(v, *(v.begin()));
	// And then make a var to store the result of our function.
	std::vector<int>::iterator find;

	std::cout << std::endl;
	std::cout << "=Visualising vector contents (with foreach loop): =======" << std::endl;
	for (unsigned int i = 0; i < v.size(); i++) // Showing index
		show(i);
	std::cout << "|" << std::endl;
	std::for_each(v.begin(), v.end(), show); // Showing the contents
	std::cout << "|" << std::endl;

	std::cout << std::endl;
	std::cout << "=Proving we return the first occurrence of toFind: ======" << std::endl;
	find = easyfind(v, 10);
	std::cout << "Value found: " << *find << ", between " << *(find-1) << \
	" and " << *(find+1) << " (at index " << std::distance(firstIndex, find) << ")" << std::endl;

	std::cout << std::endl;
	std::cout << "=Proving we can find value at last index: ===============" << std::endl;
	find = easyfind(v,42);
	std::cout << "Value found: " << *find << " (at index " << std::distance(firstIndex, find) << ")" << std::endl;
	
	std::cout << std::endl;
	std::cout << "=Proving we can find value at first index: ==============" << std::endl;
	find = easyfind(v,0);
	std::cout << "Value found: " << *find << " (at index " << std::distance(firstIndex, find) << ")" << std::endl;

	std::cout << std::endl;
	std::cout << "=Showing an exception is thrown if val is not found: ====" << std::endl;
	try
	{
		find = easyfind(v, -42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return(0);
}
