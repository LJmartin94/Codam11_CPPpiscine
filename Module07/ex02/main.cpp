/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/25 21:13:49 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
// #include "Array.tpp"

int main(void)
{
	Array<int> test(5);
	for (unsigned int i = 0; i < test.size(); i++)
		std::cout << test.array[i] << std::endl;
	// std::cout << test;
	return(0);
}
