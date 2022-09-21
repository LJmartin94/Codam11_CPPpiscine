/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/21 22:31:01 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp" 

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
Data::Data(std::string param)
:var(param)
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
		this->var = assignment.var;
	}
	return(*this);
}

////////////////////////////////////////////////////////////////////////////////


// Pubic methods
////////////////////////////////////////////////////////////////////////////////
int		Data::function()
{
	std::cout << "This function works. Wow." << std::endl;
	// std::cout << "Var stored in Data: " << this->var << std::endl;
	return (0);
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
std::ostream& operator<< (std::ostream& o, const Data& i)
{
	o << "Var stored in Data: " << i.var << std::endl;
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
