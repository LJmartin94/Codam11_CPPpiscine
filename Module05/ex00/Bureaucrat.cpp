/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/31 16:56:30 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
Bureaucrat::Bureaucrat()
{
	if (Bureaucrat_DEBUG_MESSAGES)
		std::cout << "Default constructor called." << std::endl;
	return;
}

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	if (Bureaucrat_DEBUG_MESSAGES)
		std::cout << "Copy constructor called." << std::endl;
	*this = copy;
	return;
}

// Destructor
Bureaucrat::~Bureaucrat()
{
	if (Bureaucrat_DEBUG_MESSAGES)
		std::cout << "Destructor called" << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Operator overloads
////////////////////////////////////////////////////////////////////////////////

// Assignment operator overload (deep copy)
Bureaucrat& Bureaucrat::operator= (const Bureaucrat& assignment)
{
	if (Bureaucrat_DEBUG_MESSAGES && Bureaucrat_ADD_VERBOSE)
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
std::ostream& operator<< (std::ostream& o, const Bureaucrat& i)
{
	//TODO: REQUIRES PER CLASS IMPLEMENTATION
	o << i;
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
