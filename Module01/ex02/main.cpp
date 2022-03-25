/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 15:41:58 by limartin      #+#    #+#                 */
/*   Updated: 2022/03/25 19:07:07 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string> //string datatype
#include <iostream> //stream operators

int	main(void)
{
	std::string stringVAR = "HI THIS IS BRAIN";
	// std::string* stringPTR = &stringVAR;
	// std::string& stringREF = stringVAR;
	int var = 42;
	int* ptr = &var;
	int& ref = var;

	std::cout << stringVAR << std::endl;
	std::cout << "Address of var      " << &var << std::endl;
	std::cout << "Address held by ptr " << ptr << std::endl;
	std::cout << "Address held by ref " << &ref << std::endl;
	var = 3;
	std::cout << "Address of var      " << &var << std::endl;
	std::cout << "Address held by ptr " << ptr << std::endl;
	std::cout << "Address held by ref " << &ref << std::endl;
	return (0);
}
