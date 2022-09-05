/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/02 16:30:24 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
Form::Form(std::string name, std::string target, unsigned int to_sign, \
unsigned int to_execute)
: _name(name), 
_target(target), 
_signed(false), 
_signGrade(to_sign), 
_executeGrade(to_execute)
{
	if (Form_DEBUG_MESSAGES)
		std::cout << "Form Default constructor called." << std::endl;

	if(to_sign < 1 || to_execute < 1)
		throw GradeTooHighException();
	else if (to_sign > 150 || to_execute > 150)
		throw GradeTooLowException();
	return;
}

// Copy constructor
Form::Form(const Form& copy)
: _name(copy._name),
_target(copy._target),
_signed(copy._signed), 
_signGrade(copy._signGrade), 
_executeGrade(copy._executeGrade)
{
	if (Form_DEBUG_MESSAGES)
		std::cout << "Form Copy constructor called." << std::endl;
	return;
}

// Destructor
Form::~Form()
{
	if (Form_DEBUG_MESSAGES)
		std::cout << "Form Destructor called" << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Operator overloads
////////////////////////////////////////////////////////////////////////////////

// Assignment operator overload (deep copy)
Form& Form::operator= (const Form& assignment)
{
	if (Form_DEBUG_MESSAGES && Form_ADD_VERBOSE)
		std::cout << "Form Copy assignment operator called" << std::endl;
	if (this != &assignment)
	{
		this->_signed = assignment._signed; 
		// the only non-const value we can assign with an assignment operator is
		// whether the form has been signed or not.
	}
	return(*this);
}

////////////////////////////////////////////////////////////////////////////////


// Pubic methods
////////////////////////////////////////////////////////////////////////////////
// virtual void	execute(const Bureaucrat& executor) -> pure virtual function
////////////////////////////////////////////////////////////////////////////////


// Protected methods
////////////////////////////////////////////////////////////////////////////////
bool	Form::check_executable(const Bureaucrat& executor) const
{
	if (this->Get_executeGrade() < executor.Get_grade())
		throw GradeTooLowException();
	else if ( !(this->Get_signed()) )
		throw FormUnsignedException();
	else
		return (true);
	return (false);
}
////////////////////////////////////////////////////////////////////////////////


// Private methods
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////


// Accessors
////////////////////////////////////////////////////////////////////////////////
std::string		Form::Get_name(void) const
{
	return(this->_name);
}

bool			Form::Get_signed(void) const
{
	return(this->_signed);
}

unsigned int	Form::Get_signGrade(void) const
{
	return(this->_signGrade);
}

unsigned int	Form::Get_executeGrade(void) const
{
	return(this->_executeGrade);
}

std::string		Form::Get_target(void) const
{
	return(this->_target);
}


// Basically Set_signed();
void			Form::beSigned(const Bureaucrat& signer)
{
	if (signer.Get_grade() > this->Get_signGrade())
		throw GradeTooLowException();
	else
		this->_signed = true;
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
	o << std::endl
	<< "Form name:          " << i.Get_name() << std::endl
	<< "Form target:        " << i.Get_target() << std::endl
	<< "Form sign grade:    " << i.Get_signGrade() << std::endl
	<< "Form execute grade: " << i.Get_executeGrade() << std::endl
	<< "Form status:        ";
	if(i.Get_signed())
		o << "Signed." << std::endl;
	else
		o << "Not yet signed." << std::endl;
	o << std::endl;
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
