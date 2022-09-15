/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ConversionOutput.cpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/15 13:05:39 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ConversionOutput.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
ConversionOutput::ConversionOutput()
{
	if (ConversionOutput_DEBUG_MESSAGES)
		std::cout << "ConversionOutput Default constructor called." << std::endl;
	return;
}

// Copy constructor
ConversionOutput::ConversionOutput(const ConversionOutput& copy)
{
	if (ConversionOutput_DEBUG_MESSAGES)
		std::cout << "ConversionOutput Copy constructor called." << std::endl;
	*this = copy;
	return;
}

// Destructor
ConversionOutput::~ConversionOutput()
{
	if (ConversionOutput_DEBUG_MESSAGES)
		std::cout << "ConversionOutput Destructor called" << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Operator overloads
////////////////////////////////////////////////////////////////////////////////

// Assignment operator overload (deep copy)
ConversionOutput& ConversionOutput::operator= (const ConversionOutput& assignment)
{
	if (ConversionOutput_DEBUG_MESSAGES && ConversionOutput_ADD_VERBOSE)
		std::cout << "ConversionOutput Copy assignment operator called" << std::endl;
	if (this != &assignment)
	{
		//TODO: REQUIRES PER CLASS IMPLEMENTATION
	}
	return(*this);
}

////////////////////////////////////////////////////////////////////////////////


// Pubic methods
////////////////////////////////////////////////////////////////////////////////
std::string	ConversionOutput::cShow(void) const
{
	std::stringstream ss;
	std::string ret;

	ss << this->c;
	ss >> ret;
	return(ret);
}

std::string	ConversionOutput::iShow(void) const
{
	std::stringstream ss;
	std::string ret;

	ss << this->i;
	ss >> ret;
	return(ret);
}

std::string	ConversionOutput::fShow(void) const
{
	std::stringstream ss;
	std::string ret;

	ss << this->f;
	ss >> ret;
	return(ret);
}

std::string	ConversionOutput::dShow(void) const
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
std::ostream& operator<< (std::ostream& o, const ConversionOutput& i)
{
	o << "char:   " << i.cShow() << std::endl;
	o << "int:    " << i.iShow() << std::endl;
	o << "float:  " << i.fShow() << std::endl;
	o << "double: " << i.dShow() << std::endl;
	
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
