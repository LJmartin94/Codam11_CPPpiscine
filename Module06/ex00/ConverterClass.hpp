/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ConverterClass.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:42 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/15 16:00:03 by limartin      ########   odam.nl         */
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
	ConverterClass(int i = 0);						// Default & INT constructor
	ConverterClass(char c);							// Char constructor
	ConverterClass(double d);						// Double constructor
	ConverterClass(float f);						// Float constructor
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

	void	convertFromChar(char c);
	void	convertFromInt(int i);
	void	convertFromFloat(float f);
	void	convertFromDouble(double d);
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
