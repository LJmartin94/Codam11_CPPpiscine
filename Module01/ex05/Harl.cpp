/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/01 16:46:33 by limartin      #+#    #+#                 */
/*   Updated: 2022/04/03 17:30:26 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// PUBLIC:

Harl::Harl()
{
	_lookupTable[DEBUG] = "DEBUG";
	_complaints[DEBUG] = &Harl::debug;

	_lookupTable[INFO] = "INFO";
	_complaints[INFO] = &Harl::info;

	_lookupTable[WARNING] = "WARNING";
	_complaints[WARNING] = &Harl::warning;
	
	_lookupTable[ERROR] = "ERROR";
	_complaints[ERROR] = &Harl::error;
	return;
}

Harl::~Harl()
{
	return;
}

void	Harl::complain ( std::string level )
{
	ComplaintType type = NA;
	for (int i = 0; i < SIZE; i++)
	{
		if (!(level.compare(_lookupTable[i])))
		{
			type = static_cast<ComplaintType>(i);
			break;
		}
	}
	if (type!= NA)
		(this->*_complaints[type])();
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
