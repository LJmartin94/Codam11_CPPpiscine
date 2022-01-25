/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/24 21:03:00 by limartin      #+#    #+#                 */
/*   Updated: 2022/01/25 17:54:16 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.class.hpp"
// #include <stdlib.h> //Exit, EXIT_SUCCESS

int main()
{
	Phonebook pb;
	
	while(true)
	{
		std::string buf;
		std::cin >> buf;
		pb.doCommand(buf);
	}
	return (0);
}
