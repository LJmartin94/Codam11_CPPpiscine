/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/02 14:03:47 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
PresidentialPardonForm::PresidentialPardonForm()
{
	if (PresidentialPardonForm_DEBUG_MESSAGES)
		std::cout << "PresidentialPardonForm Default constructor called." << std::endl;
	return;
}

// Copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
: Form(copy)
{
	if (PresidentialPardonForm_DEBUG_MESSAGES)
		std::cout << "PresidentialPardonForm Copy constructor called." << std::endl;
	*this = copy;
	return;
}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm()
{
	if (PresidentialPardonForm_DEBUG_MESSAGES)
		std::cout << "PresidentialPardonForm Destructor called" << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Operator overloads
////////////////////////////////////////////////////////////////////////////////

// Assignment operator overload (deep copy)
PresidentialPardonForm& PresidentialPardonForm::operator= (const PresidentialPardonForm& assignment)
{
	if (PresidentialPardonForm_DEBUG_MESSAGES && PresidentialPardonForm_ADD_VERBOSE)
		std::cout << "PresidentialPardonForm Copy assignment operator called" << std::endl;
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
std::ostream& operator<< (std::ostream& o, const PresidentialPardonForm& i)
{
	//TODO: REQUIRES PER CLASS IMPLEMENTATION
	o << i;
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
