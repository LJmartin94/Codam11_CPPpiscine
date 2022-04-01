/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/31 14:37:36 by limartin      #+#    #+#                 */
/*   Updated: 2022/04/01 15:02:42 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int error_argcount(int argc, char **argv, std::string& filename, \
std::string& s1, std::string& s2)
{
	if (argc != 4)
	{
		std::cout << "Please provide exactly three arguments" << std::endl;
		return (1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	return (0);
}

int error_iofiles(std::ifstream& input, std::ofstream& output, std::string filename)
{
	input.open(filename, std::ifstream::in);
	if (!input.good())
	{
		std::cout << "File with name \"" << filename;
		std::cout << "\" does not exist or is fucky. #Awkward" << std::endl;
		return (1);
	}
	output.open(filename.append(".replace"), std::ofstream::out);
	if (!output.good())
	{
		std::cout << "There was a problem creating/reading from \"" << filename;
		std::cout << "\"" << std::endl;
		return (1);
	}
	return (0);
}

int main(int argc, char **argv)
{
	std::string filename;
	std::string s1;
	std::string s2;
	if (error_argcount(argc, argv, filename, s1, s2))
		return (1);

	std::ifstream input;
	std::ofstream output;
	if (error_iofiles(input, output, filename))
		return (1);
	
	while (!input.eof())
	{
		std::string buf;
		std::getline(input, buf);
		output << buf;
		if (!input.eof())
			output << std::endl;
	}
	return (0);
}
