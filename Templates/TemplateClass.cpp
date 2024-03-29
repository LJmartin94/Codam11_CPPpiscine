/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TemplateClass.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/01 23:35:03 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TemplateClass.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
TemplateClass::TemplateClass()
{
	if (TemplateClass_DEBUG_MESSAGES)
		std::cout << "TemplateClass Default constructor called." << std::endl;
	return;
}

// Copy constructor
TemplateClass::TemplateClass(const TemplateClass& copy)
{
	if (TemplateClass_DEBUG_MESSAGES)
		std::cout << "TemplateClass Copy constructor called." << std::endl;
	*this = copy;
	return;
}

// Destructor
TemplateClass::~TemplateClass()
{
	if (TemplateClass_DEBUG_MESSAGES)
		std::cout << "TemplateClass Destructor called" << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Operator overloads
////////////////////////////////////////////////////////////////////////////////

// Assignment operator overload (deep copy)
TemplateClass& TemplateClass::operator= (const TemplateClass& assignment)
{
	if (TemplateClass_DEBUG_MESSAGES && TemplateClass_ADD_VERBOSE)
		std::cout << "TemplateClass Copy assignment operator called" << std::endl;
	if (this != &assignment)
	{
		//TODO: REQUIRES PER CLASS IMPLEMENTATION
	}
	return(*this);
}

////////////////////////////////////////////////////////////////////////////////


// Pubic methods
////////////////////////////////////////////////////////////////////////////////

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
std::ostream& operator<< (std::ostream& o, const TemplateClass& i)
{
	//TODO: REQUIRES PER CLASS IMPLEMENTATION
	o << i;
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
