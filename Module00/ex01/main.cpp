/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/24 21:03:00 by limartin      #+#    #+#                 */
/*   Updated: 2022/01/25 14:06:24 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	enum CommandType { ADD, SEARCH, EXIT, ERROR};
	CommandType inputMatch;

	while(true)
	{
		std::string buf;
		std::cin >> buf;
		inputMatch = ERROR;
		if (buf.compare("ADD") == 0)
			inputMatch = ADD;
		else if (buf.compare("SEARCH") == 0)
			inputMatch = SEARCH;
		else if (buf.compare("EXIT") == 0)
			inputMatch = EXIT;
		switch(inputMatch)
		{
			case ADD:
				std::cout << "Contact added." << std::endl;
				break;
			case SEARCH:
				std::cout << "Looking up contact." << std::endl;
				break;
			case EXIT:
				std::cout << "Exiting program" << std::endl;
				return (0);
			case ERROR:
				std::cout << "ERROR" << std::endl;
				break;
		}
		std::cout << std::endl;
	}
	return (0);
}
