/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/27 23:36:32 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
Span::Span(unsigned int elements)
: _maxSize(elements), _padding(0)
{
	if (Span_DEBUG_MESSAGES)
		std::cout << "Span Default constructor called." << std::endl;
	return;
}

// Copy constructor
Span::Span(const Span& copy)
{
	if (Span_DEBUG_MESSAGES)
		std::cout << "Span Copy constructor called." << std::endl;
	*this = copy;
	return;
}

// Destructor
Span::~Span()
{
	if (Span_DEBUG_MESSAGES)
		std::cout << "Span Destructor called" << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Operator overloads
////////////////////////////////////////////////////////////////////////////////

// Assignment operator overload (deep copy)
Span& Span::operator= (const Span& assignment)
{
	if (Span_DEBUG_MESSAGES && Span_ADD_VERBOSE)
		std::cout << "Span Copy assignment operator called" << std::endl;
	if (this != &assignment)
	{
		this->_vector = assignment._vector;
		this->_maxSize = assignment._maxSize;
		this->_padding = assignment._padding;
	}
	return(*this);
}

////////////////////////////////////////////////////////////////////////////////


// Pubic methods
////////////////////////////////////////////////////////////////////////////////
void			Span::addNumber(int toAdd)
{
	if (this->_vector.size() >= _maxSize)
		throw(std::range_error("EXCEPTION: Cannot add more elements to this vector"));
	_vector.push_back(toAdd);

	//The below code is to determine how much padding is required to display the values nicely
	unsigned int largest = static_cast<unsigned int>(std::abs(toAdd));
	largest = _vector.size() > largest ? _vector.size() : std::abs(toAdd);
	
	unsigned int new_padding = 0;
	while (largest > 0)
	{
		largest = largest / 10;
		new_padding++;
	}
	if (new_padding > this->_padding)
		this->_padding = new_padding;
	return;
}

void			Span::addNumber(std::vector<int>::iterator start, \
							std::vector<int>::iterator end)
{
	if ((this->_vector.size() + std::distance(start, end)) > _maxSize)
		throw(std::range_error("EXCEPTION: Cannot add that many elements to this vector"));
	for (std::vector<int>::iterator iter = start; iter != end; iter++)
		this->_vector.push_back(*iter);
	
	//The below code is to determine how much padding is required to display the values nicely
	unsigned int largest = _vector.size();
	for (std::vector<int>::iterator i = start; i != end; i++)
		largest = (largest >= static_cast<unsigned int>(std::abs(*i))) ? \
		largest : static_cast<unsigned int>(std::abs(*i));
	
	unsigned int new_padding = 0;
	while (largest > 0)
	{
		largest = largest / 10;
		new_padding++;
	}
	if (new_padding > this->_padding)
		this->_padding = new_padding;
	return;
}

unsigned int	Span::shortestSpan(void) const
{
	return (1);
}

unsigned int	Span::longestSpan(void) const
{
	return (1);
}

void			Span::showSpan(std::ostream& o) const
{
	o<< "Index    |";
	for (unsigned int i = 0; i < this->_vector.size(); i++)
		this->_showNum(i, o);
	o << std::endl;

	o<< "Contents |";
	for (std::vector<const int>::iterator i = this->_vector.begin(); i != _vector.end(); i++)
		this->_showNum(*i, o);
	o << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Protected methods
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////


// Private methods
////////////////////////////////////////////////////////////////////////////////
void		Span::_showNum(const int &n, std::ostream& o) const
{
	o.fill(' ');
	o.width(this->_padding);
	o << std::right << n << "|";
	return;
}
////////////////////////////////////////////////////////////////////////////////


// Accessors
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////


// Nested classes
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////


// External to class
////////////////////////////////////////////////////////////////////////////////

//Stream insertion operator overload
std::ostream& operator<< (std::ostream& o, const Span& i)
{
	i.showSpan(o);
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
