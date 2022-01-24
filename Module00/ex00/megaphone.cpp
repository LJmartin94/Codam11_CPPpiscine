/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/24 15:48:02 by limartin      #+#    #+#                 */
/*   Updated: 2022/01/24 19:33:17 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// #include <string> // std::string
// #include <locale> // std::locale, std::toupper

int main(int argc, char **argv)
{
	(void)argv;
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int a = 1; a < argc ; a++)
		{
			std::string strToUpper = argv[a];
			std::locale loc;
			for (std::string::iterator i = strToUpper.begin(); i < strToUpper.end(); i++)
				*i = std::toupper(*i, loc);
			std::cout << strToUpper;
		}
	}
	std::cout << std::endl; 
	return (0);
}
