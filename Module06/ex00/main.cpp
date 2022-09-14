/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/14 18:05:16 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include "TemplateClass.hpp"
#include "Convert.hpp"

int parse_loop(int &ret, std::string::iterator &i, std::string &input)
{
	ret--;
	while (i != input.end())
	{
		if (!std::isdigit(*i))
			break;
		i++;
	}
	// std::cout << "Parsing character: " << (*i) << std::endl;
	// std::cout << "Ret value: " << ret << std::endl;
	return(i == input.end());
}

int	detect_input_type(std::string input)
{
	int ret = CHAR;
	std::string::iterator i = input.begin();
	
	if (input.length() == 1 && !std::isdigit(*i)) //check char
		return (ret);
	if (*i == '-')
		i++;
	if (parse_loop(ret, i, input)) //check int
		return (ret);
	
	if (*i == '.' && i != input.begin() && std::isdigit(*(i-1)) \
		&& i + 1 != input.end())
		i++;
	if (parse_loop(ret, i, input)) //check double
		return (ret);
	
	if (*i == 'f' && i != input.begin() && std::isdigit(*(i-1)) \
		&& i + 1 == input.end())
		i++;
	if (parse_loop(ret, i, input)) //check float
		return (ret);
	return (--ret);
}

int main(int argc, char **argv)
{
	if (argc != 2 || detect_input_type(argv[1]) == INVALID)
	{
		std::cerr << "Error: Bad input passed." << std::endl;
		return (1);
	}
	switch (detect_input_type(argv[1]))
	{
		case CHAR:
			std::cout << "It's a CHAR" << std::endl;
			break;
		
		case INT:
			std::cout << "It's a INT" << std::endl;
			break;
		
		case DOUBLE:
			std::cout << "It's a DOUBLE" << std::endl;
			break;
		
		case FLOAT:
			std::cout << "It's a FLOAT" << std::endl;
			break;
		
		case INVALID:
			std::cout << "It's a INVALID" << std::endl;
			break;
		
		default:
			std::cout << "Something went wrong" << std::endl;
			break;
	}
	return(0);
}
