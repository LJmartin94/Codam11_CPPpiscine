/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/31 14:37:36 by limartin      #+#    #+#                 */
/*   Updated: 2022/03/31 18:02:38 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int main(int argc, char ** argv)
{
	if (argc != 4)
	{
		std::cout << "Please provide exactly three arguments" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream input(filename);
	if (!input.good())
	{
		std::cout << "File with name \"" << filename;
		std::cout << "\" does not exist or is fucky. #Awkward" << std::endl;
		return (1);
	}
	std::ofstream output(filename.append(".replace"));
	// std::cout << filename << std::endl;
	return (0);
}
