/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TemplateClass.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:42 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/21 11:30:50 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//TODO: Make sure this is all-caps!
#ifndef TEMPLATECLASS_HPP
# define TEMPLATECLASS_HPP

#include <iostream> // Stream operators

# define TemplateClass_DEBUG_MESSAGES 1
# define TemplateClass_ADD_VERBOSE 1

class TemplateClass
{
	// Constructors & Destructors
	////////////////////////////////////////////////////////////////////////////
	public:
	TemplateClass();								// Default constructor
	TemplateClass(const TemplateClass& copy);		// Copy constructor
	~TemplateClass();								// Destructor
	////////////////////////////////////////////////////////////////////////////

	// Operator overloads
	////////////////////////////////////////////////////////////////////////////
	public:
	TemplateClass& operator= (const TemplateClass& assignment);	// Assignment operator
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
};

// Stream operator overload
std::ostream& operator<< (std::ostream& o, TemplateClass const & i);

#endif
