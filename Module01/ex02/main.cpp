/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 15:41:58 by limartin      #+#    #+#                 */
/*   Updated: 2022/03/26 15:26:28 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string> //string datatype
#include <iostream> //stream operators

int	main(void)
{
	std::string stringVAR = "HI THIS IS BRAIN";
	std::string* stringPTR = &stringVAR;
	std::string& stringREF = stringVAR;

	std::cout << "Address of stringVAR      " << &stringVAR << std::endl;
	std::cout << "Address held by stringPTR " << stringPTR << std::endl;
	std::cout << "Address held by stringREF " << &stringREF << std::endl;
	std::cout << "Value of stringVAR            " << stringVAR << std::endl;
	std::cout << "Value pointed to by stringPTR " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF " << stringREF << std::endl;
	return (0);
}
