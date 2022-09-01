/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/01 22:45:02 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
Form::Form()
{
	if (Form_DEBUG_MESSAGES)
		std::cout << "Default constructor called." << std::endl;
	return;
}

// Copy constructor
Form::Form(const Form& copy)
{
	if (Form_DEBUG_MESSAGES)
		std::cout << "Copy constructor called." << std::endl;
	*this = copy;
	return;
}

// Destructor
Form::~Form()
{
	if (Form_DEBUG_MESSAGES)
		std::cout << "Destructor called" << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Operator overloads
////////////////////////////////////////////////////////////////////////////////

// Assignment operator overload (deep copy)
Form& Form::operator= (const Form& assignment)
{
	if (Form_DEBUG_MESSAGES && Form_ADD_VERBOSE)
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
const std::string	Form::Get_name(void) const
{
	return(this->_name);
}

bool				Form::Get_signed(void) const
{
	return(this->_signed);
}

const unsigned int	Form::Get_signGrade(void) const
{
	return(this->_signGrade);
}

const unsigned int	Form::Get_executeGrade(void) const
{
	return(this->_executeGrade);
}

////////////////////////////////////////////////////////////////////////////////


// Nested classes
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////


// External to class
////////////////////////////////////////////////////////////////////////////////

//Stream insertion operator overload
std::ostream& operator<< (std::ostream& o, const Form& i)
{
	//TODO: REQUIRES PER CLASS IMPLEMENTATION
	o << i;
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
