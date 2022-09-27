/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:42 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/27 18:01:42 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//TODO: Make sure this is all-caps!
#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream> // Stream operators

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
	Span();								// Default constructor
	Span(const Span& copy);		// Copy constructor
	~Span();								// Destructor
	////////////////////////////////////////////////////////////////////////////

	// Operator overloads
	////////////////////////////////////////////////////////////////////////////
	public:
	Span& operator= (const Span& assignment);	// Assignment operator
	////////////////////////////////////////////////////////////////////////////

	// Pubic member variables & methods
	////////////////////////////////////////////////////////////////////////////
	public:
	////////////////////////////////////////////////////////////////////////////

	// Protected member variables & methods
	////////////////////////////////////////////////////////////////////////////
	protected:
	////////////////////////////////////////////////////////////////////////////

	// Private member variables & methods
	////////////////////////////////////////////////////////////////////////////
	private:
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
