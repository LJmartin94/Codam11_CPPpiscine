/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/05 18:20:20 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
Intern::Intern()
{
	if (Intern_DEBUG_MESSAGES)
		std::cout << "Intern Default constructor called." << std::endl;
	return;
}

// Copy constructor
Intern::Intern(const Intern& copy)
{
	if (Intern_DEBUG_MESSAGES)
		std::cout << "Intern Copy constructor called." << std::endl;
	*this = copy;
	return;
}

// Destructor
Intern::~Intern()
{
	if (Intern_DEBUG_MESSAGES)
		std::cout << "Intern Destructor called" << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Operator overloads
////////////////////////////////////////////////////////////////////////////////

// Assignment operator overload (deep copy)
Intern& Intern::operator= (const Intern& assignment)
{
	if (Intern_DEBUG_MESSAGES && Intern_ADD_VERBOSE)
		std::cout << "Intern Copy assignment operator called" << std::endl;
	if (this != &assignment)
	{
		//This does nothing
	}
	return(*this);
}

////////////////////////////////////////////////////////////////////////////////


// Pubic methods
////////////////////////////////////////////////////////////////////////////////
Form	*Intern::makeForm(std::string formName, std::string formTarget)
{
	(void)formTarget;
	
	// PARSING
	for( std::string::iterator i = formName.begin(); i != formName.end(); i++)
		*i = toupper(*i);
	while(formName.find(" ") != std::string::npos)
	{
		formName = formName.substr(0, (formName.find(" "))) + \
		formName.substr((formName.find(" ") + 1), formName.size());
	}
	if (formName.find("FORM") != std::string::npos)
		formName = formName.substr(0, (formName.find("FORM")));
	// std::cout << "Looking for form: |" << formName << "|" << std::endl;
	
	// FORM IDENTIFICATION
	const std::string forms[3] = \
	{"ROBOTOMYREQUEST", "PRESIDENTIALPARDON", "SHRUBBERYCREATION"};
	int form_requested = -1;
	for ( int i = 0; i <3; i++)
	{
		if(formName.compare(forms[i]) == 0)
			form_requested = i;
	}

	//FORM RETURNING
	Form *ret = NULL;
	switch (form_requested)
	{
		case 0:
			ret = new RobotomyRequestForm(formTarget);
			break;
		case 1:
			ret = new PresidentialPardonForm(formTarget);
			break;
		case 2:
			ret = new ShrubberyCreationForm(formTarget);
			break;
		default:
			throw Form::NoSuchFormException();
	}
	std::cout << "Intern creates " << ret->Get_name() << std::endl;
	return (ret);
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
std::ostream& operator<< (std::ostream& o, const Intern& i)
{
	(void)i;
	o << "An intern has no name, no grade, no unique characteristics!";
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
