/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:42 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/28 01:07:07 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//TODO: Make sure this is all-caps!
#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream> // Stream operators
#include <vector> // Storage vector for this class
#include <numeric> // Adjacent_difference function in shortestSpan()

# ifndef Span_DEBUG_MESSAGES 
#  define Span_DEBUG_MESSAGES 1
# endif

# ifndef Span_ADD_VERBOSE 
#  define Span_ADD_VERBOSE 1
# endif


class Span
{
	// Constructors & Destructors
	////////////////////////////////////////////////////////////////////////////
	public:
	Span(unsigned int elements = 2);	// Default constructor
	Span(const Span& copy);				// Copy constructor
	~Span();							// Destructor
	////////////////////////////////////////////////////////////////////////////

	// Operator overloads
	////////////////////////////////////////////////////////////////////////////
	public:
	Span& operator= (const Span& assignment);	// Assignment operator
	////////////////////////////////////////////////////////////////////////////

	// Pubic member variables & methods
	////////////////////////////////////////////////////////////////////////////
	public:
	void			addNumber(int toAdd);
	void			addNumber(std::vector<int>::iterator start, \
								std::vector<int>::iterator end);
	unsigned int	shortestSpan(void) const;
	unsigned int	longestSpan(void) const;
	void			showSpan(std::ostream& o = std::cout) const;

	////////////////////////////////////////////////////////////////////////////

	// Protected member variables & methods
	////////////////////////////////////////////////////////////////////////////
	protected:
	////////////////////////////////////////////////////////////////////////////

	// Private member variables & methods
	////////////////////////////////////////////////////////////////////////////
	private:
	std::vector<int>	_vector;
	unsigned int		_maxSize;
	unsigned int		_padding;
	void				_showNum(const int &n, std::ostream& o) const;
	////////////////////////////////////////////////////////////////////////////

	// Accessors
	////////////////////////////////////////////////////////////////////////////
	public:
	////////////////////////////////////////////////////////////////////////////

	// Nested classes
	////////////////////////////////////////////////////////////////////////////
	private:
	////////////////////////////////////////////////////////////////////////////
};

// Stream insertion operator overload
std::ostream& operator<< (std::ostream& o, Span const & i);

#endif
