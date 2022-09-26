/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/26 19:21:31 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream> // Stream operators

int main(void)
{
	std::vector<int> v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(2);
	v.push_back(10); // First occurrence
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(10); // Second occurrence
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	v.push_back(9);
	v.push_back(42); // Last element

	// std::cout << "Vector: " << v << std::endl;
	std::vector<int>::iterator find;
	find = easyfind(v, 10);

	std::cout << "Value found: " << *find << ", between " << *(find-1) << \
	" and " << *(find+1) << " (at index " << std::distance(v.begin(), find) << ")" << std::endl;
	// find = v.begin();
	// std::cout << "Begin: " << *(find+1);
	find = easyfind(v,42);
	std::cout << "Value found: " << *find << " (at index " << std::distance(v.begin(), find) << ")" << std::endl;
	find = easyfind(v,0);
	std::cout << "Value found: " << *find << " (at index " << std::distance(v.begin(), find) << ")" << std::endl;
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
