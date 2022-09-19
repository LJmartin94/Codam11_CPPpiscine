/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/19 14:43:21 by limartin      ########   odam.nl         */
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

	if (!input.compare("-inf") || !input.compare("inf") || \
		!input.compare("+inf") || !input.compare("nan")) 
		return(DOUBLE); //check double pseudo literals

	if (!input.compare("-inff") || !input.compare("inff") || \
		!input.compare("+inff") || !input.compare("nanf")) 
		return(FLOAT); //check float pseudo literals

	if (*i == '-' || *i == '+')
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
	int type = INVALID;
	if (argc == 2)
		type = detect_input_type(argv[1]);
	if (type == INVALID)
	{
		std::cerr << "Error: Bad input passed." << std::endl;
		return (1);
	}
	ConverterClass out;
	out.stringTranslator(argv[1], type);
	std::cout << out << std::endl;
	return(0);
}
