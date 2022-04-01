/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/31 14:37:36 by limartin      #+#    #+#                 */
/*   Updated: 2022/04/01 15:59:05 by limartin      ########   odam.nl         */
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

void replace_in_buf(std::string& buf, const std::string& s1, const std::string& s2)
{
	size_t pos = 0; // the rest of the string to search
	size_t match = buf.find(s1, pos); // where/whether a match was found
	size_t s1_len = s1.length();
	size_t s2_len = s2.length();

	while(match != std::string::npos)
	{
		buf.erase(match, s1_len);
		buf.insert(match, s2);
		pos = match + s2_len;
		match = buf.find(s1, pos);
	}
	return;
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
		replace_in_buf(buf, s1, s2);
		output << buf;
		if (!input.eof())
			output << std::endl;
	}
	return (0);
}
