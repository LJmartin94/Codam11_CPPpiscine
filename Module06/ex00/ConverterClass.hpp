/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ConverterClass.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:42 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/15 15:33:35 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTERCLASS_HPP
# define CONVERTERCLASS_HPP

#include <iostream> // I/O Stream operators
#include <sstream> // String stream operators

# ifndef ConverterClass_DEBUG_MESSAGES 
#  define ConverterClass_DEBUG_MESSAGES 1
# endif

# ifndef ConverterClass_ADD_VERBOSE 
#  define ConverterClass_ADD_VERBOSE 1
# endif


class ConverterClass
{
	// Constructors & Destructors
	////////////////////////////////////////////////////////////////////////////
	public:
	ConverterClass();								// Default constructor
	ConverterClass(const ConverterClass& copy);		// Copy constructor
	~ConverterClass();								// Destructor
	////////////////////////////////////////////////////////////////////////////

	// Operator overloads
	////////////////////////////////////////////////////////////////////////////
	public:
	ConverterClass& operator= (const ConverterClass& assignment);	// Assignment operator
	////////////////////////////////////////////////////////////////////////////

	// Pubic member variables & methods
	////////////////////////////////////////////////////////////////////////////
	public:
	char	c;
	int		i;
	float	f;
	double	d;
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
	std::string	cShow(void) const;
	std::string	iShow(void) const;
	std::string	fShow(void) const;
	std::string	dShow(void) const;
	////////////////////////////////////////////////////////////////////////////

	// Nested classes
	////////////////////////////////////////////////////////////////////////////
	private:
	////////////////////////////////////////////////////////////////////////////
};

// Stream insertion operator overload
std::ostream& operator<< (std::ostream& o, ConverterClass const & i);

#endif
