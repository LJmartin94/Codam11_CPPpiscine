/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/24 21:03:00 by limartin      #+#    #+#                 */
/*   Updated: 2022/01/24 21:51:02 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	while(true)
	{
		std::string buf;
		std::cin >> buf;
		switch (buf)
		{
			case "ADD":
				std::cout << "Contact added." << std::endl;
			case "SEARCH":
				std::cout << "Looking up contact." << std::endl;
			case "EXIT":
				std::cout << "Exiting program" << std::endl;
				break;
		}
		std::cout << buf << std::endl;
	}
}
