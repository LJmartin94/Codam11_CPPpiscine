/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:42 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/21 19:56:56 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//TODO: Make sure this is all-caps!
#ifndef DATA_HPP
# define DATA_HPP

#include <iostream> // Stream operators

# ifndef Data_DEBUG_MESSAGES 
#  define Data_DEBUG_MESSAGES 1
# endif

# ifndef Data_ADD_VERBOSE 
#  define Data_ADD_VERBOSE 1
# endif


class Data
{
	// Constructors & Destructors
	////////////////////////////////////////////////////////////////////////////
	public:
	Data();								// Default constructor
	Data(const Data& copy);		// Copy constructor
	~Data();								// Destructor
	////////////////////////////////////////////////////////////////////////////

	// Operator overloads
	////////////////////////////////////////////////////////////////////////////
	public:
	Data& operator= (const Data& assignment);	// Assignment operator
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
std::ostream& operator<< (std::ostream& o, Data const & i);

#endif
