/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/02 01:57:53 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
Bureaucrat::Bureaucrat(std::string name, unsigned int grade)
: _name(name)
{
	if (Bureaucrat_DEBUG_MESSAGES)
		std::cout << "Bureaucrat Default constructor called." << std::endl;
	
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		this->_grade = grade;
	return;
}

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat& copy)
: _name(copy._name), _grade(copy._grade)
{
	if (Bureaucrat_DEBUG_MESSAGES)
		std::cout << "Bureaucrat Copy constructor called." << std::endl;
	return;
}

// Destructor
Bureaucrat::~Bureaucrat()
{
	if (Bureaucrat_DEBUG_MESSAGES)
		std::cout << "Bureaucrat Destructor called" << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Operator overloads
////////////////////////////////////////////////////////////////////////////////

// Assignment operator overload (deep copy)
Bureaucrat& Bureaucrat::operator= (const Bureaucrat& assignment)
{
	if (Bureaucrat_DEBUG_MESSAGES && Bureaucrat_ADD_VERBOSE)
		std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
	if (this != &assignment)
	{
		this->_grade = assignment._grade;
		// We don't copy over the _name as it is const, 
		// even though we could with a const cast, but that's UB. 
	}
	return(*this);
}

////////////////////////////////////////////////////////////////////////////////


// Pubic methods
////////////////////////////////////////////////////////////////////////////////
void				Bureaucrat::signForm(Form& formToSign) const
{
	try
	{
		formToSign.beSigned(*this);
		if (formToSign.Get_signed())
			std::cout << this->_name << " signed " << formToSign.Get_name() \
			<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_name << " couldn't sign " << formToSign.Get_name() \
		<< " because " << e.what() << std::endl;
	}
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
	o << i.Get_name() << ", bureaucrat grade " << i.Get_grade() << "." 
	<< std::endl;
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
