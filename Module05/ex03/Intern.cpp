/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/05 16:41:32 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
Intern::Intern()
{
	if (Intern_DEBUG_MESSAGES)
		std::cout << "Intern Default constructor called." << std::endl;
	return;
}

// Copy constructor
Intern::Intern(const Intern& copy)
{
	if (Intern_DEBUG_MESSAGES)
		std::cout << "Intern Copy constructor called." << std::endl;
	*this = copy;
	return;
}

// Destructor
Intern::~Intern()
{
	if (Intern_DEBUG_MESSAGES)
		std::cout << "Intern Destructor called" << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Operator overloads
////////////////////////////////////////////////////////////////////////////////

// Assignment operator overload (deep copy)
Intern& Intern::operator= (const Intern& assignment)
{
	if (Intern_DEBUG_MESSAGES && Intern_ADD_VERBOSE)
		std::cout << "Intern Copy assignment operator called" << std::endl;
	if (this != &assignment)
	{
		//This does nothing
	}
	return(*this);
}

////////////////////////////////////////////////////////////////////////////////


// Pubic methods
////////////////////////////////////////////////////////////////////////////////
Form	*makeForm(std::string formName, std::string formTarget)
{
	
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
std::ostream& operator<< (std::ostream& o, const Intern& i)
{
	o << "An intern has no name, no grade, no unique characteristics!";
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
