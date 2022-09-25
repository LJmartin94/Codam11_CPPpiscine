/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.tpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/25 21:21:52 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
template<typename T>
Array<T>::Array(unsigned int n)
: _len(n)
{
	this->array = new T[n];
	if (Array_DEBUG_MESSAGES)
		std::cout << "Array (Un)Parameterised Constructor called." << std::endl;
	return;
}

// Copy constructor
template<typename T>
Array<T>::Array(const Array& copy)
{
	if (Array_DEBUG_MESSAGES)
		std::cout << "Array Copy constructor called." << std::endl;
	*this = copy;
	return;
}

// Destructor
template<typename T>
Array<T>::~Array()
{
	delete[] this->array;
	if (Array_DEBUG_MESSAGES)
		std::cout << "Array Destructor called" << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Operator overloads
////////////////////////////////////////////////////////////////////////////////

// Assignment operator overload (deep copy)
template<typename T>
Array<T>& Array<T>::operator= (const Array& assignment)
{
	if (Array_DEBUG_MESSAGES && Array_ADD_VERBOSE)
		std::cout << "Array Copy assignment operator called" << std::endl;
	if (this != &assignment)
	{
		//TODO: REQUIRES PER CLASS IMPLEMENTATION
	}
	return(*this);
}

////////////////////////////////////////////////////////////////////////////////


// Pubic methods
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////


// Protected methods
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
 

// Private methods
////////////////////////////////////////////////////////////////////////////////

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
template<typename T>
std::ostream& operator<< (std::ostream& o, const Array<T>& a)
{
	unsigned int len = a.size();
	for (unsigned int i = 0; i < len; i++)
		o << a.array[i] << std::endl;
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
