/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ConverterClass.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/19 15:36:11 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ConverterClass.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
ConverterClass::ConverterClass(int i)
{
	convertFromInt(i);
	if (ConverterClass_DEBUG_MESSAGES)
		std::cout << "ConverterClass INT (or Default) constructor called." << std::endl;
	return;
}

ConverterClass::ConverterClass(char c)
{
	convertFromChar(c);
	if (ConverterClass_DEBUG_MESSAGES)
		std::cout << "ConverterClass CHAR constructor called." << std::endl;
	return;
}

ConverterClass::ConverterClass(double d)
{
	convertFromDouble(d);
	if (ConverterClass_DEBUG_MESSAGES)
		std::cout << "ConverterClass DOUBLE constructor called." << std::endl;
	return;
}

ConverterClass::ConverterClass(float f)
{
	convertFromFloat(f);
	if (ConverterClass_DEBUG_MESSAGES)
		std::cout << "ConverterClass FLOAT constructor called." << std::endl;
	return;
}

// Copy constructor
ConverterClass::ConverterClass(const ConverterClass& copy)
{
	if (ConverterClass_DEBUG_MESSAGES)
		std::cout << "ConverterClass Copy constructor called." << std::endl;
	*this = copy;
	return;
}

// Destructor
ConverterClass::~ConverterClass()
{
	if (ConverterClass_DEBUG_MESSAGES)
		std::cout << "ConverterClass Destructor called" << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Operator overloads
////////////////////////////////////////////////////////////////////////////////

// Assignment operator overload (deep copy)
ConverterClass& ConverterClass::operator= (const ConverterClass& assignment)
{
	if (ConverterClass_DEBUG_MESSAGES && ConverterClass_ADD_VERBOSE)
		std::cout << "ConverterClass Copy assignment operator called" << std::endl;
	if (this != &assignment)
	{
		this->c = assignment.c;
		this->i = assignment.i;
		this->d = assignment.d;
		this->f = assignment.f;
	}
	return(*this);
}

////////////////////////////////////////////////////////////////////////////////


// Pubic methods
////////////////////////////////////////////////////////////////////////////////
void	ConverterClass::stringTranslator(std::string input, int datatype)
{
	switch (datatype)
	{
	case CHAR:
		// std::cout << "It's a CHAR" << std::endl;
		convertFromChar(*(input.begin()));
		break;
	
	case INT:
		// std::cout << "It's a INT" << std::endl;
		int i;
		// i = std::stoi(input); //C++11
		std::istringstream(input) >> i;
		convertFromInt(i);
		break;
	
	case DOUBLE:
		// std::cout << "It's a DOUBLE" << std::endl;
		double d;
		// d = std::stod(input); //C++11
		std::istringstream(input) >> d;
		convertFromDouble(d);
		break;
	
	case FLOAT:
		// std::cout << "It's a FLOAT" << std::endl;
		float f;
		// f = std::stof(input); //C++11
		// std::stringstream(input) >> f; // Doesn't work for floats on imacs
		f = atof(input.c_str()); //Slightly C-like, but that's what works. Nicer than casting to double.
		convertFromFloat(f);
		break;
	
	case INVALID:
		// std::cout << "It's a INVALID" << std::endl;
		convertFromInt(-1);
		break;

	default:
		convertFromInt(-1);
		break;
	}
}

void	ConverterClass::convertFromChar(char c)
{
	this->c = c;
	
	this->i = static_cast<int>(c);
	this->d = static_cast<double>(c);
	this->f = static_cast<float>(c);
	return;
}

void	ConverterClass::convertFromInt(int i)
{
	this->i = i;
	
	this->c = static_cast<char>(i);
	this->d = static_cast<double>(i);
	this->f = static_cast<float>(i);
	return;
}

void	ConverterClass::convertFromFloat(float f)
{
	this->f = f;
	
	this->i = static_cast<int>(f);
	this->c = static_cast<char>(f);
	this->d = static_cast<double>(f);
	return;
}

void	ConverterClass::convertFromDouble(double d)
{
	this->d = d;
	
	this->i = static_cast<int>(d);
	this->c = static_cast<char>(d);
	this->f = static_cast<float>(d);
	return;
}


////////////////////////////////////////////////////////////////////////////////


// Protected methods
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////


// Private methods
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////


// Accessors
////////////////////////////////////////////////////////////////////////////////

std::string	ConverterClass::cShow(void) const
{
	std::stringstream ss;
	std::string ret;

	ss << this->c;
	ss >> ret;
	return(ret);
}

std::string	ConverterClass::iShow(void) const
{
	std::stringstream ss;
	std::string ret;

	ss << this->i;
	ss >> ret;
	return(ret);
}

std::string	ConverterClass::fShow(void) const
{
	std::stringstream ss;
	std::string ret;

	ss << this->f;
	ss >> ret;
	return(ret);
}

std::string	ConverterClass::dShow(void) const
{
	std::stringstream ss;
	std::string ret;

	ss << this->d;
	ss >> ret;
	return(ret);
}

////////////////////////////////////////////////////////////////////////////////


// Nested classes
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////


// External to class
////////////////////////////////////////////////////////////////////////////////

//Stream insertion operator overload
std::ostream& operator<< (std::ostream& o, const ConverterClass& i)
{
	o << "char:   " << i.cShow() << std::endl;
	o << "int:    " << i.iShow() << std::endl;
	o << "float:  " << i.fShow() << std::endl;
	o << "double: " << i.dShow() << std::endl;

	// o << "char:   " << i.c << std::endl;
	// o << "int:    " << i.i << std::endl;
	// o << "float:  " << i.f << std::endl;
	// o << "double: " << i.d << std::endl;
	
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
