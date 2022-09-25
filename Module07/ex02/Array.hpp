/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:42 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/25 22:59:42 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream> // Stream operators

# ifndef Array_DEBUG_MESSAGES 
#  define Array_DEBUG_MESSAGES 1
# endif

# ifndef Array_ADD_VERBOSE 
#  define Array_ADD_VERBOSE 1
# endif

template<typename T = int>
class Array
{
	// Constructors & Destructors
	////////////////////////////////////////////////////////////////////////////
	public:
	Array(unsigned int n = 3);				// Default constructor
	Array(unsigned int n, T defaultVal);	// Additional constructor
	Array(const Array& copy);				// Copy constructor
	~Array();								// Destructor
	////////////////////////////////////////////////////////////////////////////

	// Operator overloads
	////////////////////////////////////////////////////////////////////////////
	public:
	Array&	operator= (const Array& assignment);	// Assignment operator
	T&		operator[] (unsigned int i) const;		// Subscript operator
	////////////////////////////////////////////////////////////////////////////

	// Pubic member variables & methods
	////////////////////////////////////////////////////////////////////////////
	public:
	unsigned int	size(void) const;
	////////////////////////////////////////////////////////////////////////////

	// Protected member variables & methods
	////////////////////////////////////////////////////////////////////////////
	protected:
	////////////////////////////////////////////////////////////////////////////

	// Private member variables & methods
	////////////////////////////////////////////////////////////////////////////
	private:
	T*				_array;
	unsigned int	_len;
	////////////////////////////////////////////////////////////////////////////

	// Accessors
	////////////////////////////////////////////////////////////////////////////
	public:
	////////////////////////////////////////////////////////////////////////////

	// Nested classes
	////////////////////////////////////////////////////////////////////////////
	private:
	class	IndexOutOfBoundsException : public std::exception
	{
		public:
			const char *what() const throw()
			{
				return ("Exception: Accessed index out of Array bounds. (Array::IndexOutOfBoundsException)");
			}
	};
	////////////////////////////////////////////////////////////////////////////
};

// Stream insertion operator overload
template<typename T>
std::ostream& operator<< (std::ostream& o, const Array<T>& a);

#include "Array.tpp"

#endif
