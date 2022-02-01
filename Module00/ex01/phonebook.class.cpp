/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/24 21:08:36 by limartin      #+#    #+#                 */
/*   Updated: 2022/02/01 19:44:45 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string> 
#include <iostream>
#include "phonebook.class.hpp"

// PUBLIC
Phonebook::Phonebook(void)
{
	this->commands[ADD] = &Phonebook::ft_add;
	this->commands[SEARCH] = &Phonebook::ft_search;
	this->commands[EXIT] = &Phonebook::ft_exit;
	this->commands[ERROR] = &Phonebook::ft_error;

	this->_contactsSaved = 0;
	std::cout << "Phonebook created." << std::endl;
	return;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Phonebook destroyed." << std::endl;
	return;
}

int Phonebook::doCommand(std::string buf)
{
	Phonebook::_CommandType inputMatch = ERROR;

	if (buf.compare("ADD") == 0)
		inputMatch = ADD;
	else if (buf.compare("SEARCH") == 0)
		inputMatch = SEARCH;
	else if (buf.compare("EXIT") == 0)
		inputMatch = EXIT;
	
	(this->*commands[inputMatch])();
	return(0);
}

// PRIVATE
int Phonebook::ft_add()
{
	std::cout << "Contact added." << std::endl;
	return (0);
}

int Phonebook::ft_search()
{
	std::cout << "Looking up contact." << std::endl;
	return (0);
}

int Phonebook::ft_exit()
{
	std::cout << "Exiting program" << std::endl;
	exit(EXIT_SUCCESS);
	return (0);
}

int Phonebook::ft_error()
{
	std::cout << "BAD INPUT, TRY: ADD || SEARCH || EXIT" << std::endl;
	return (0);
}
