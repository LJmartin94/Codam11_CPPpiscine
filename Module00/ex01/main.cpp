/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/24 21:03:00 by limartin      #+#    #+#                 */
/*   Updated: 2022/01/25 16:31:59 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// #include <stdlib.h> //Exit, EXIT_SUCCESS

int ft_add()
{
	std::cout << "Contact added." << std::endl;
	return (0);
}

int ft_search()
{
	std::cout << "Looking up contact." << std::endl;
	return (0);
}

int ft_exit()
{
	std::cout << "Exiting program" << std::endl;
	exit(EXIT_SUCCESS);
	return (0);
}

int ft_error()
{
	std::cout << "BAD INPUT, TRY: ADD || SEARCH || EXIT" << std::endl;
	return (0);
}

int main()
{
	enum CommandType { ADD, SEARCH, EXIT, ERROR};
	int (*commands[])() = {ft_add, ft_search, ft_exit, ft_error};
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
		
		commands[inputMatch]();
	}
	return (0);
}
