/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TemplateClass.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/23 12:34:03 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TemplateClass.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
TemplateClass::TemplateClass()
{
	if (TemplateClass_DEBUG_MESSAGES)
		std::cout << "Default constructor called." << std::endl;
	return;
}

// Copy constructor
TemplateClass::TemplateClass(const TemplateClass& copy)
{
	if (TemplateClass_DEBUG_MESSAGES)
		std::cout << "Copy constructor called." << std::endl;
	*this = copy;
	return;
}

// Destructor
TemplateClass::~TemplateClass()
{
	if (TemplateClass_DEBUG_MESSAGES)
		std::cout << "Destructor called" << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Operator overloads
////////////////////////////////////////////////////////////////////////////////

// Assignment operator overload (deep copy)
TemplateClass& TemplateClass::operator= (const TemplateClass& assignment)
{
	if (TemplateClass_DEBUG_MESSAGES && TemplateClass_ADD_VERBOSE)
		std::cout << "Copy assignment operator called" << std::endl;
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


// External to class
////////////////////////////////////////////////////////////////////////////////

//Stream operator overload
std::ostream& operator<< (std::ostream& o, const TemplateClass& i)
{
	//TODO: REQUIRES PER CLASS IMPLEMENTATION
	o << i;
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
