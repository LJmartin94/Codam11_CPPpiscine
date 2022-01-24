/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/24 15:48:02 by limartin      #+#    #+#                 */
/*   Updated: 2022/01/24 19:19:15 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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
			for (std::string::iterator i = strToUpper.begin(); i < strToUpper.end(); i++)
				*i = std::toupper(*i);
			std::cout << strToUpper;
		}
	}
	std::cout << std::endl; 
	return (0);
}
