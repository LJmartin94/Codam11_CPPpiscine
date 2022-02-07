/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/01 17:40:37 by limartin      #+#    #+#                 */
/*   Updated: 2022/02/07 14:16:13 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

// PUBLIC
Contact::Contact(void)
{
	std::cout << "Contact created." << std::endl;
	return;
}

Contact::~Contact(void)
{
	std::cout << "Contact destroyed." << std::endl;
	return;
}

int				Contact::set_firstName(std::string input)
{
	this->_firstName = input;
	return(0);
}

std::string		Contact::get_firstName()
{
	return(this->_firstName);
}

int				Contact::set_lastName(std::string input)
{
	this->_lastName = input;
	return(0);
}

std::string		Contact::get_lastName()
{
	return(this->_lastName);
}

int				Contact::set_nickname(std::string input)
{
	this->_nickname = input;
	return(0);
}

std::string		Contact::get_nickname()
{
	return(this->_nickname);
}

int				Contact::set_phoneNumber(std::string input)
{
	this->_phoneNumber = input;
	return(0);
}

std::string		Contact::get_phoneNumber()
{
	return(this->_phoneNumber);
}

int				Contact::set_secret(std::string input)
{
	this->_darkestSecret = input;
	return(0);
}

std::string		Contact::get_secret()
{
	return(this->_darkestSecret);
}


// PRIVATE
