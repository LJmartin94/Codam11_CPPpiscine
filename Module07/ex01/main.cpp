/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/25 16:30:32 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "testing.hpp"

void    regularShow(int& arrayContents)
{
    std::cout << arrayContents << std::endl;
    return;
}

std::string regularIncrement(int& arrayContents)
{
  	(arrayContents)++;
    return("Yes.");
}

int main(void)
{
	int intArray[3] = {0, 1, 2};
	char charArray[3] = {'a', 'b', 'c'};

	std::cout << std::endl << "Show with normal function:" << std::endl;
	iter(intArray, 3, &regularShow);
	std::cout << std::endl << "Incrementing with normal function." << std::endl;
	iter(intArray, 3, &regularIncrement);
	std::cout << std::endl << "Show with normal function:" << std::endl;
	iter(intArray, 3, &regularShow);

	std::cout << std::endl << "Show with template function:" << std::endl;
	iter(intArray, 3, &templateShow<int>);
	std::cout << std::endl << "Incrementing with template function." << std::endl;
	iter(intArray, 3, &templateIncrement<int>);
	std::cout << std::endl << "Show with template function:" << std::endl;
	iter(intArray, 3, &templateShow<int>);

	std::cout << std::endl << "Showing template function works for other datatypes:" << std::endl;
	std::cout << std::endl << "Show with template function:" << std::endl;
	iter(charArray, 3, &templateShow<char>);
	std::cout << std::endl << "Incrementing with template function." << std::endl;
	iter(charArray, 3, &templateIncrement<char>);
	std::cout << std::endl << "Show with template function:" << std::endl;
	iter(charArray, 3, &templateShow<char>);


	return(0);
}
