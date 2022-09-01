/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/01 17:24:02 by lindsay       ########   odam.nl         */
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

// Any attempt to instantiate a Bureaucrat using an invalid grade must throw an exception:
// either a Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException.
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
const std::string	Bureaucrat::Get_name(void) const
{
	return(this->_name);
}

unsigned int		Bureaucrat::Get_grade(void) const
{
	return(this->_grade);
}


void				Bureaucrat::Decrement_grade(void)
{
	// The lower the grade, the better; 
	// so decrement_grade must increment the unsigned int
	// (according to the subject)
	if(this->_grade + 1 > 150)
		throw GradeTooLowException();
	else
		this->_grade++;
}

void				Bureaucrat::Increment_grade(void)
{
	// The lower the grade, the better; 
	// so increment_grade must decrement the unsigned int
	// (according to the subject)
	if(this->_grade - 1 < 1)
		throw GradeTooHighException();
	else
		this->_grade--;
}

////////////////////////////////////////////////////////////////////////////////


// Nested classes
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
