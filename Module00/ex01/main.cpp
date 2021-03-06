/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/24 21:03:00 by limartin      #+#    #+#                 */
/*   Updated: 2022/02/25 14:23:16 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //stream operators
#include "Phonebook.hpp"

int main()
{
	Phonebook pb;
	
	while(true)
	{
		std::string buf;
		std::cin >> buf;
		if (pb.doCommand(buf))
			break;
	}
	return (0);
}
