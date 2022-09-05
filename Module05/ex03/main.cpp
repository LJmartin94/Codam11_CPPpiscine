/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/05 18:13:28 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat bob("Bob", 1);
	Intern underbob;
	std::cout << underbob << std::endl;
	// VALID SYNTAX (to me)//
	Form *a = underbob.makeForm("Robotomy request form", "Bender");
	delete a;
	a = underbob.makeForm("robotomy request form", "Bender");
	delete a;
	a = underbob.makeForm("RobotomyRequestForm", "Bender");
	delete a;
	a = underbob.makeForm("RobOtomyREQUEst", "Bender");
	delete a;
	a = underbob.makeForm("robotomyrequest", "Bender");
	delete a;
	a = underbob.makeForm("Robotomy request form form form form", "Bender");
	delete a;
	a = underbob.makeForm("     R o botomy   re quest   fo rm      ", "Bender");
	delete a;
	a = underbob.makeForm("Robotomy request form, please", "Bender");
	bob.signForm(*a);
	bob.executeForm(*a);
	delete a;


	a = underbob.makeForm("Presidential pardon form", "Bender");
	bob.signForm(*a);
	bob.executeForm(*a);
	delete a;

	a = underbob.makeForm("Shrubbery Creation form", "Bender");
	bob.signForm(*a);
	bob.executeForm(*a);
	delete a;

	// INVALID SYNTAX (to me)//
	try
	{
		Form *b = underbob.makeForm("Robotomy Robotomy request form", "Bender");
		delete b;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form *b = underbob.makeForm("A Robotomy request form, please", "Bender");
		delete b;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form *b = underbob.makeForm("Robotomy request, please", "Bender");
		delete b;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return(0);
}
