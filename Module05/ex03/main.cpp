/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/05 16:40:13 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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

	bob.signForm(shrub);
	bob.executeForm(shrub);

	std::cout << nicola;
	bob.signForm(nicola);
	bob.executeForm(nicola);

	std::cout << marvin;
	bob.signForm(marvin);
	bob.executeForm(marvin);
	bob.executeForm(marvin);
	bob.executeForm(marvin);
	bob.executeForm(marvin);
	bob.executeForm(marvin);
	bob.executeForm(marvin);

		
	return(0);
}
