/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ConverterClass.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/21 18:51:00 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ConverterClass.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
ConverterClass::ConverterClass(int i)
{
	convertFromInt(i);
	this->referenceString = "";
	this->referenceType = INT;
	if (ConverterClass_DEBUG_MESSAGES)
		std::cout << "ConverterClass INT (or Default) constructor called." << std::endl;
	return;
}

ConverterClass::ConverterClass(char c)
{
	convertFromChar(c);
	this->referenceString = "";
	this->referenceType = CHAR;
	if (ConverterClass_DEBUG_MESSAGES)
		std::cout << "ConverterClass CHAR constructor called." << std::endl;
	return;
}

ConverterClass::ConverterClass(double d)
{
	convertFromDouble(d);
	this->referenceString = "";
	this->referenceType = DOUBLE;
	if (ConverterClass_DEBUG_MESSAGES)
		std::cout << "ConverterClass DOUBLE constructor called." << std::endl;
	return;
}

ConverterClass::ConverterClass(float f)
{
	convertFromFloat(f);
	this->referenceString = "";
	this->referenceType = FLOAT;
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
		this->referenceString = assignment.referenceString;
		this->referenceType = assignment.referenceType;
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
		std::cout << "It's a CHAR" << std::endl;
		convertFromChar(*(input.begin()));
		this->referenceString = input;
		this->referenceType = CHAR;
		break;
	
	case INT:
		std::cout << "It's an INT" << std::endl;
		int i;
		// i = std::stoi(input); //C++11
		std::istringstream(input) >> i;
		convertFromInt(i);
		this->referenceString = input;
		this->referenceType = INT;
		break;
	
	case DOUBLE:
		std::cout << "It's a DOUBLE" << std::endl;
		double d;
		// d = std::stod(input); //C++11
		std::istringstream(input) >> d;
		convertFromDouble(d);
		this->referenceString = input;
		this->referenceType = DOUBLE;
		break;
	
	case FLOAT:
		std::cout << "It's a FLOAT" << std::endl;
		float f;
		// f = std::stof(input); //C++11
		// std::stringstream(input) >> f; // Doesn't work for floats on imacs
		f = atof(input.c_str()); //Slightly C-like, but that's what works. Nicer than casting to double.
		convertFromFloat(f);
		this->referenceString = input;
		this->referenceType = FLOAT;
		break;
	
	case INVALID:
		std::cout << "It's an INVALID" << std::endl;
		convertFromInt(-1);
		this->referenceString = input;
		this->referenceType = INVALID;
		break;

	default:
		convertFromInt(-1);
		this->referenceString = input;
		this->referenceType = INVALID;
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

	if (this->c != this->i)
		ss << "Impossible";
	else if (isprint(this->c))
		ss << this->c;
	else
		ss << "Non displayable";
	ret = ss.str();
	return(ret);
}

std::string	ConverterClass::iShow(void) const
{
	std::stringstream ss;
	std::string ret;

	double comparison = atof(referenceString.c_str());

	if ((this->i == INT_MAX && (static_cast<int>(comparison - 1.0) == INT_MAX || this->f - 1 >= this->i )) ||
		(this->i == INT_MIN && (static_cast<int>(comparison + 1.0) == INT_MIN || this->f + 1 >= this->i )))
		ss << "Impossible";
	else
		ss << this->i;
	ret = ss.str();
	return(ret);
}

std::string	ConverterClass::fShow(void) const
{
	std::stringstream ss;
	std::string ret;

	double comparison = atof(referenceString.c_str());
	if (this->referenceType == INT && (this->f >= INT_MAX || this->f <= INT_MIN) && (comparison > INT_MAX || comparison < INT_MIN))
		ss << "Inaccurate";
	else if (this->f == std::numeric_limits<float>::infinity() && \
		(this->d < std::numeric_limits<double>::infinity() || comparison < std::numeric_limits<double>::infinity()))
		ss << "Impossible";
	else
	{
		ss << std::fixed;

		double integral_part = 0;
		double fractional_part = modf(this->f, &integral_part);
		if (fractional_part <= 0.001 && fractional_part >= -0.001)
			ss << std::setprecision(1);
		
		ss << this->f;
		ss << "f";
	}
	ret = ss.str();
	return(ret);
}

std::string	ConverterClass::dShow(void) const
{
	std::stringstream ss;
	std::string ret;

	double comparison = atof(referenceString.c_str());
	if ( (this->referenceType == INT && (this->d >= INT_MAX || this->d <= INT_MIN) && (comparison > INT_MAX || comparison < INT_MIN)) || \
		(this->referenceType == FLOAT && (comparison > std::numeric_limits<float>::max() || comparison * -1 > std::numeric_limits<float>::max())) )
		ss << "Inaccurate";
	else
	{
		ss << std::fixed;

		double integral_part = 0;
		double fractional_part = modf(this->f, &integral_part);
		if (fractional_part <= 0.000001 && fractional_part >= -0.000001)
			ss << std::setprecision(1);
		
		ss << this->d;
	}
	ret = ss.str();
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
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
