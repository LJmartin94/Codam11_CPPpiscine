/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/09 13:44:02 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include "TemplateClass.hpp"
#include <iostream> // Stream operators

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: Bad input passed." << std::endl;
	}
	return(0);
}
