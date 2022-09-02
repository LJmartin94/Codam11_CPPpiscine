/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/02 17:51:05 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
: Form("ShrubberyCreationForm", target, 145, 137)
{
	if (ShrubberyCreationForm_DEBUG_MESSAGES)
		std::cout << "ShrubberyCreationForm Default constructor called." << std::endl;
	return;
}

// Copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
: Form(copy)
{
	if (ShrubberyCreationForm_DEBUG_MESSAGES)
		std::cout << "ShrubberyCreationForm Copy constructor called." << std::endl;
	*this = copy;
	return;
}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	if (ShrubberyCreationForm_DEBUG_MESSAGES)
		std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Operator overloads
////////////////////////////////////////////////////////////////////////////////

// Assignment operator overload (deep copy)
// ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm& assignment)
// {
// 	if (ShrubberyCreationForm_DEBUG_MESSAGES && ShrubberyCreationForm_ADD_VERBOSE)
// 		std::cout << "ShrubberyCreationForm Copy assignment operator called" << std::endl;
// 	if (this != &assignment)
// 	{
// 		//TODO: REQUIRES PER CLASS IMPLEMENTATION
// 	}
// 	return(*this);
// }

////////////////////////////////////////////////////////////////////////////////


// Pubic methods
////////////////////////////////////////////////////////////////////////////////
void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (this->check_executable(executor))
		std::cout << this->Get_name() << " does the thing." << std::endl;
	std::string tree = 
		"                                        .\n\
                                    .         ;\n\
        .              .              ;%     ;;\n\
            ,           ,                :;%  %;\n\
            :         ;                   :;%;'     .,\n\
    ,.        %;     %;            ;        %;'    ,;\n\
    ;       ;%;  %%;        ,     %;    ;%;    ,%'\n\
    %;       %;%;      ,  ;       %;  ;%;   ,%;'\n\
        ;%;      %;        ;%;        % ;%;  ,%;'\n\
        `%;.     ;%;     %;'         `;%%;.%;'\n\
        `:;%.    ;%%. %@;        %; ;@%;%'\n\
            `:%;.  :;bd%;          %;@%;'\n\
            `@%:.  :;%.         ;@@%;'\n\
                `@%.  `;@%.      ;@@%;\n\
                `@%%. `@%%    ;@@%;\n\
                    ;@%. :@%%  %@@%;\n\
                    %@bd%%%bd%%:;\n\
                        #@%%%%%:;;\n\
                        %@@%%%::;\n\
                        %@@@%(o);  . '\n\
                        %@@@o%;:(.,'\n\
                    `.. %@@@o%::;\n\
                        `)@@@o%::;\n\
                        %@@(o)::;\n\
                        .%@@@@%::;\n\
                        ;%@@@@%::;.\n\
                    ;%@@@@%%:;;;.\n\
                ...;%@@@@@%%:;;;;,..    ";
	std::cout << tree;
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
