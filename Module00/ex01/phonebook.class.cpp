/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/24 21:08:36 by limartin      #+#    #+#                 */
/*   Updated: 2022/02/07 13:51:21 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //stream operators
#include <iomanip> //setting width modifiers
#include <string> //string datatype
#include <sstream> //string stream for string to int conversion
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
	
	return ( (this->*commands[inputMatch])() );
}

// PRIVATE
int Phonebook::ft_add()
{
	int i;
	std::string buf;

	i = this->_contactsSaved % 8;

	std::cout << "Please enter FIRST NAME:" << std::endl;
	std::cin >> buf;
	this->_contactArray[i].set_firstName(buf);

	std::cout << "Please enter LAST NAME:" << std::endl;
	std::cin >> buf;
	this->_contactArray[i].set_lastName(buf);

	std::cout << "Please enter NICKNAME:" << std::endl;
	std::cin >> buf;
	this->_contactArray[i].set_nickname(buf);

	std::cout << "Please enter PHONE NUMBER:" << std::endl;
	std::cin >> buf;
	this->_contactArray[i].set_phoneNumber(buf);

	std::cout << "Please enter DARKEST SECRET:" << std::endl;
	std::cin >> buf;
	this->_contactArray[i].set_secret(buf);

	std::cout << "Contact has been added." << std::endl;
	this->_contactsSaved++;
	return (0);
}

int Phonebook::ft_search()
{
	if (this->_contactsSaved <= 0)
	{
		std::cout << "There are no contacts stored." << std::endl;
		return (0);
	}
	
	std::cout << "|" << std::setw(10) << "INDEX";
	std::cout << "|" << std::setw(10) << "FIRST NAME";
	std::cout << "|" << std::setw(10) << "LAST NAME";
	std::cout << "|" << std::setw(10) << "NICKNAME";
	std::cout << "|" << std::endl;

	for (int i = 0; i < _contactsSaved && i < 8; i++)
	{
		std::cout << "|" << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << util_truncate(this->_contactArray[i].get_firstName());
		std::cout << "|" << std::setw(10) << util_truncate(this->_contactArray[i].get_lastName());
		std::cout << "|" << std::setw(10) << util_truncate(this->_contactArray[i].get_nickname());
		std::cout << "|" << std::endl;
	}

	std::string buf;
	std::stringstream stringHolder;
	int i = 0;

	std::cout << "Which index would you like to view?" << std::endl;
	std::cin >> buf;
	stringHolder.str(buf);
	stringHolder >> i;

	if(!(buf.find_first_not_of("0123456789") == std::string::npos))
		std::cout << "ERROR: NOT A VALID NUMBER" << std::endl;
	else if (i >= 0 && i <= 7 && i < this->_contactsSaved)
	{
		std::cout << "FIRST NAME    :" << std::setw(10) << util_truncate(this->_contactArray[i].get_firstName()) << std::endl;
		std::cout << "LAST NAME     :" << std::setw(10) << util_truncate(this->_contactArray[i].get_lastName()) << std::endl;
		std::cout << "NICKNAME      :" << std::setw(10) << util_truncate(this->_contactArray[i].get_nickname()) << std::endl;
		std::cout << "PHONE NUMBER  :" << std::setw(10) << util_truncate(this->_contactArray[i].get_phoneNumber()) << std::endl;
		std::cout << "DARKEST SECRET:" << std::setw(10) << util_truncate(this->_contactArray[i].get_secret()) << std::endl;
	}
	else
		std::cout << "ERROR: NO SUCH CONTACT" << std::endl;
	return (0);
}

int Phonebook::ft_exit()
{
	std::cout << "Exiting program" << std::endl;
	return (1);
}

int Phonebook::ft_error()
{
	std::cout << "BAD INPUT, TRY: ADD || SEARCH || EXIT" << std::endl;
	return (0);
}

std::string		Phonebook::util_truncate(std::string str)
{
	if (str.size() > 10)	
	{
		str.resize(9);
		str.append(".");
	}
	return (str);
}
