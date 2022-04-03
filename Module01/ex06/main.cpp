/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/01 16:46:28 by limartin      #+#    #+#                 */
/*   Updated: 2022/04/03 17:23:13 by limartin      ########   odam.nl         */
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

void complaintWrapper( Harl::ComplaintType& type, Harl& karl )
{
	std::cout << "[ " << karl.lookupTable[type] << " ]" << std::endl;
	karl.complain(karl.lookupTable[type]);
	std::cout << std::endl;
	type = static_cast<Harl::ComplaintType>((int)(type + 1));
	return;
}

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
			complaintWrapper(type, karl);
		case Harl::INFO:
			complaintWrapper(type, karl);
		case Harl::WARNING:
			complaintWrapper(type, karl);
		case Harl::ERROR:
			complaintWrapper(type, karl);
			break;
		default:
			return(error_badInput());
	}
	return (0);
}
