/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/01 16:46:28 by limartin      #+#    #+#                 */
/*   Updated: 2022/04/03 17:04:51 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	error_badInput()
{
	std::cout << "[ Probably complaining about";
	std::cout << " insignificant problems ]" << std::endl;
	return 1;
}

void complaintStrToEnum( const Harl& karl,\
 const std::string& level, Harl::ComplaintType& type)
{
	for (int i = 0; i < Harl::SIZE; i++)
	{
		if (!(level.compare(karl.lookupTable[i])))
		{
			type = static_cast<Harl::ComplaintType>(i);
			break;
		}
	}
	return;
}

// void complaintWrapper( Harl::ComplaintType& type, const Harl& karl )

int main(int argc, char **argv)
{
	if (argc != 2)
		return(error_badInput());
	
	Harl karl;
	std::string level = argv[1];
	Harl::ComplaintType type = Harl::NA;
	complaintStrToEnum(karl, level, type);
	
	switch(type)
	{
		case Harl::NA:
			return(error_badInput());
		case Harl::DEBUG:
			karl.complain("DEBUG");
			karl.complain("INFO");
			karl.complain("WARNING");
			karl.complain("ERROR");
			break;
		case Harl::INFO:
			karl.complain("INFO");
			karl.complain("WARNING");
			karl.complain("ERROR");
			break;
		case Harl::WARNING:
			karl.complain("WARNING");
			karl.complain("ERROR");
			break;
		case Harl::ERROR:
			karl.complain("ERROR");
			break;
		default:
			return(error_badInput());
	}
	return (0);
}
