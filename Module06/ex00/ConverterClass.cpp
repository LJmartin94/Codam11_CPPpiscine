/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ConverterClass.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/15 15:32:54 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ConverterClass.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
ConverterClass::ConverterClass()
{
	if (ConverterClass_DEBUG_MESSAGES)
		std::cout << "ConverterClass Default constructor called." << std::endl;
	return;
}

// Copy constructor
ConverterClass::ConverterClass(const ConverterClass& copy)
{
	if (ConverterClass_DEBUG_MESSAGES)
		std::cout << "ConverterClass Copy constructor called." << std::endl;
	*this = copy;
	return;
}

// Destructor
ConverterClass::~ConverterClass()
{
	if (ConverterClass_DEBUG_MESSAGES)
		std::cout << "ConverterClass Destructor called" << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Operator overloads
////////////////////////////////////////////////////////////////////////////////

// Assignment operator overload (deep copy)
ConverterClass& ConverterClass::operator= (const ConverterClass& assignment)
{
	if (ConverterClass_DEBUG_MESSAGES && ConverterClass_ADD_VERBOSE)
		std::cout << "ConverterClass Copy assignment operator called" << std::endl;
	if (this != &assignment)
	{
		//TODO: REQUIRES PER CLASS IMPLEMENTATION
	}
	return(*this);
}

////////////////////////////////////////////////////////////////////////////////


// Pubic methods
////////////////////////////////////////////////////////////////////////////////
std::string	ConverterClass::cShow(void) const
{
	std::stringstream ss;
	std::string ret;

	ss << this->c;
	ss >> ret;
	return(ret);
}

std::string	ConverterClass::iShow(void) const
{
	std::stringstream ss;
	std::string ret;

	ss << this->i;
	ss >> ret;
	return(ret);
}

std::string	ConverterClass::fShow(void) const
{
	std::stringstream ss;
	std::string ret;

	ss << this->f;
	ss >> ret;
	return(ret);
}

std::string	ConverterClass::dShow(void) const
{
	std::stringstream ss;
	std::string ret;

	ss << this->d;
	ss >> ret;
	return(ret);
}

////////////////////////////////////////////////////////////////////////////////


// Protected methods
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////


// Private methods
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////


// Accessors
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////


// Nested classes
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////


// External to class
////////////////////////////////////////////////////////////////////////////////

//Stream insertion operator overload
std::ostream& operator<< (std::ostream& o, const ConverterClass& i)
{
	o << "char:   " << i.cShow() << std::endl;
	o << "int:    " << i.iShow() << std::endl;
	o << "float:  " << i.fShow() << std::endl;
	o << "double: " << i.dShow() << std::endl;
	
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
