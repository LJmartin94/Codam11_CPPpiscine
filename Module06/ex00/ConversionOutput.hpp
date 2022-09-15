/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ConversionOutput.hpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:42 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/15 13:06:26 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONOUTPUT_HPP
# define CONVERSIONOUTPUT_HPP

#include <iostream> // I/O Stream operators
#include <sstream> // String stream operators

# ifndef ConversionOutput_DEBUG_MESSAGES 
#  define ConversionOutput_DEBUG_MESSAGES 1
# endif

# ifndef ConversionOutput_ADD_VERBOSE 
#  define ConversionOutput_ADD_VERBOSE 1
# endif


class ConversionOutput
{
	// Constructors & Destructors
	////////////////////////////////////////////////////////////////////////////
	public:
	ConversionOutput();								// Default constructor
	ConversionOutput(const ConversionOutput& copy);		// Copy constructor
	~ConversionOutput();								// Destructor
	////////////////////////////////////////////////////////////////////////////

	// Operator overloads
	////////////////////////////////////////////////////////////////////////////
	public:
	ConversionOutput& operator= (const ConversionOutput& assignment);	// Assignment operator
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
std::ostream& operator<< (std::ostream& o, ConversionOutput const & i);

#endif
