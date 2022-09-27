/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/27 18:01:17 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
Span::Span()
{
	if (Span_DEBUG_MESSAGES)
		std::cout << "Span Default constructor called." << std::endl;
	return;
}

// Copy constructor
Span::Span(const Span& copy)
{
	if (Span_DEBUG_MESSAGES)
		std::cout << "Span Copy constructor called." << std::endl;
	*this = copy;
	return;
}

// Destructor
Span::~Span()
{
	if (Span_DEBUG_MESSAGES)
		std::cout << "Span Destructor called" << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Operator overloads
////////////////////////////////////////////////////////////////////////////////

// Assignment operator overload (deep copy)
Span& Span::operator= (const Span& assignment)
{
	if (Span_DEBUG_MESSAGES && Span_ADD_VERBOSE)
		std::cout << "Span Copy assignment operator called" << std::endl;
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
std::ostream& operator<< (std::ostream& o, const Span& i)
{
	//TODO: REQUIRES PER CLASS IMPLEMENTATION
	o << i;
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
