/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/02 17:35:20 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// void test_beSigned(const Bureaucrat& signer, Form& to_sign)
// {
// 	std::cout << std::endl << "Form start: " << to_sign;
// 	try
// 	{
// 		to_sign.beSigned(signer);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	std::cout << std::endl << "Form end: " << to_sign;
// }

// void test_signForm(const Bureaucrat& signer, Form& to_sign)
// {
// 	std::cout << std::endl << "Form start: " << to_sign;
// 	signer.signForm(to_sign);
// 	std::cout << std::endl << "Form end: " << to_sign;
// }

// void test_FormCreation(std::string name, // unsigned int signGrade, unsigned int executeGrade)
// {
// 	try
// 	{
// 		Form newForm(name, signGrade, executeGrade);
// 		std::cout << newForm << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// }

int main(void)
{
	Bureaucrat bob("Bob", 1);
	Bureaucrat igor("Igor", 150);

	ShrubberyCreationForm shrub("Shrobert");
	std::cout << shrub << std::endl;
	RobotomyRequestForm marvin("Marvin");
	std::cout << marvin << std::endl;
	PresidentialPardonForm nicola("Nicola Sturgeon");
	std::cout << nicola << std::endl;

	try
	{
		nicola.execute(bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	bob.executeForm(nicola);
	igor.executeForm(nicola);
	bob.signForm(nicola);
	igor.executeForm(nicola);
	bob.executeForm(nicola);

	ShrubberyCreationForm ni("The knights who say Ni");
	bob.signForm(shrub);
	shrub = ni;
	std::cout << shrub;

	// std::cout << "=INITIAL CHECK=================================" << std::endl;
	// Form blank;
	// std::cout << blank;
	// std::cout << std::endl;

	// std::cout << "=SETTING UP====================================" << std::endl;
	// Bureaucrat incompetent_igor("Incompetent Igor", 150);
	// Bureaucrat bob("Supreme high executor Bob", 1);

	// Form easy("Easy", 150, 150); //form everyone can sign
	// Form medium("Medium", 75, 75); //form most can sign
	// Form hard("Hard", 1, 1); //form only top grade can sign
	// Form reset(hard); //stays unsigned, tests copy constructor.
	// std::cout << reset; //should print a copy of Hard form.

	// std::cout << "=TEST BOB=(Form::beSigned)====================" << std::endl;
	// test_beSigned(bob, easy);
	// test_beSigned(bob, medium);
	// test_beSigned(bob, hard);

	// easy = reset;
	// medium = reset;
	// hard = reset;

	// std::cout << "=TEST BOB=(Bureaucrat::signForm)==============" << std::endl;
	// test_signForm(bob, easy);
	// test_signForm(bob, medium);
	// test_signForm(bob, hard);

	// easy = reset;
	// medium = reset;
	// hard = reset;

	// std::cout << "=TEST IGOR=(Form::beSigned)====================" << std::endl;
	// test_beSigned(incompetent_igor, easy);
	// test_beSigned(incompetent_igor, medium);
	// test_beSigned(incompetent_igor, hard);

	// easy = reset;
	// medium = reset;
	// hard = reset;

	// std::cout << "=TEST IGOR=(Bureaucrat::signForm)==============" << std::endl;
	// test_signForm(incompetent_igor, easy);
	// test_signForm(incompetent_igor, medium);
	// test_signForm(incompetent_igor, hard);

	// easy = reset;
	// medium = reset;
	// hard = reset;

	// std::cout << "=MESSING WITH CONSTRUCTOR PARAMS===============" << std::endl;
	// test_FormCreation("Nope", 0, 75);
	// test_FormCreation("Nope", 75, 0);
	// test_FormCreation("Nope", 0, 0);
	// test_FormCreation("Nope", 0, 151);
	// test_FormCreation("Nope", 151, 0);
	// std::cout << std::endl;
	// test_FormCreation("Nope", -1, 75);
	// test_FormCreation("Nope", 151, 75);
	// test_FormCreation("Nope", 75, 151);
	// test_FormCreation("Nope", 151, 151);
	// std::cout << std::endl;

	
	return(0);
}
