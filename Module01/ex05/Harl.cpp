/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/01 16:46:33 by limartin      #+#    #+#                 */
/*   Updated: 2022/04/01 19:08:45 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// PUBLIC:

Harl::Harl()
{
	return;
}

Harl::~Harl()
{
	return;
}

void	Harl::complain ( std::string level )
{
	(void)level;
	return;
}

// PRIVATE:

void	Harl::debug( void )
{
	std::cout << "(DEBUG) I love having extra bacon for my 7XL-double-cheese-";
	std::cout << "triple-pickle-special-ketchup burger. I really do!";
	std::cout << std::endl;
	return;
}

void	Harl::info( void )
{
	std::cout << "(INFO) I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn't put enough bacon in my burger! If you did, ";
	std::cout << "I wouldn't be asking for more!" << std::endl;
	return;
}

void	Harl::warning( void )
{
	std::cout << "(WARNING) I think I deserve to have some extra bacon for free. ";
	std::cout << "I've been coming for years whereas you started working here ";
	std::cout << "since last month." << std::endl;
	return;
}

void	Harl::error( void )
{
	std::cout << "(ERROR) This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
	return;
}
