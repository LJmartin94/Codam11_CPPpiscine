/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/21 19:57:40 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp" 

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
Data::Data()
{
	if (Data_DEBUG_MESSAGES)
		std::cout << "Data Default constructor called." << std::endl;
	return;
}

// Copy constructor
Data::Data(const Data& copy)
{
	if (Data_DEBUG_MESSAGES)
		std::cout << "Data Copy constructor called." << std::endl;
	*this = copy;
	return;
}

// Destructor
Data::~Data()
{
	if (Data_DEBUG_MESSAGES)
		std::cout << "Data Destructor called" << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Operator overloads
////////////////////////////////////////////////////////////////////////////////

// Assignment operator overload (deep copy)
Data& Data::operator= (const Data& assignment)
{
	if (Data_DEBUG_MESSAGES && Data_ADD_VERBOSE)
		std::cout << "Data Copy assignment operator called" << std::endl;
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
std::ostream& operator<< (std::ostream& o, const Data& i)
{
	//TODO: REQUIRES PER CLASS IMPLEMENTATION
	o << i;
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
