/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/02 17:34:06 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
RobotomyRequestForm::RobotomyRequestForm(std::string target)
: Form("RobotomyRequestForm", target, 72, 45)
{
	if (RobotomyRequestForm_DEBUG_MESSAGES)
		std::cout << "RobotomyRequestForm Default constructor called." << std::endl;
	return;
}

// Copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
: Form(copy)
{
	if (RobotomyRequestForm_DEBUG_MESSAGES)
		std::cout << "RobotomyRequestForm Copy constructor called." << std::endl;
	*this = copy;
	return;
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm()
{
	if (RobotomyRequestForm_DEBUG_MESSAGES)
		std::cout << "RobotomyRequestForm Destructor called" << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Operator overloads
////////////////////////////////////////////////////////////////////////////////

// Assignment operator overload (deep copy)
// RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm& assignment)
// {
// 	if (RobotomyRequestForm_DEBUG_MESSAGES && RobotomyRequestForm_ADD_VERBOSE)
// 		std::cout << "RobotomyRequestForm Copy assignment operator called" << std::endl;
// 	if (this != &assignment)
// 	{
// 		//TODO: REQUIRES PER CLASS IMPLEMENTATION
// 	}
// 	return(*this);
// }

////////////////////////////////////////////////////////////////////////////////


// Pubic methods
////////////////////////////////////////////////////////////////////////////////
void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	if (this->check_executable(executor))
		std::cout << this->Get_name() << " does the thing." << std::endl;
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
// Inherited from parent.

////////////////////////////////////////////////////////////////////////////////
