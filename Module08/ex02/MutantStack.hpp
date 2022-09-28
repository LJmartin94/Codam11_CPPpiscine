/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:42 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/28 07:14:59 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream> // Stream operators
#include <stack> // Parent class

# ifndef MutantStack_DEBUG_MESSAGES 
#  define MutantStack_DEBUG_MESSAGES 1
# endif

# ifndef MutantStack_ADD_VERBOSE 
#  define MutantStack_ADD_VERBOSE 1
# endif

// Stacks are a wrapper class around an existing container
// The candidate containers must satisfy a few requirements: 
// https://en.cppreference.com/w/cpp/container/stack

// Potential underlying containers are:
// std::vector, std::list, std::deque. 	

template<class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T>
{
	// Constructors & Destructors
	////////////////////////////////////////////////////////////////////////////
	public:
	MutantStack() : std::stack<T>() 					// Default constructor
	{
		if (MutantStack_DEBUG_MESSAGES)
			std::cout << "MutantStack Default constructor called." << std::endl;
		return;
	};

	MutantStack(const MutantStack& copy)				// Copy constructor
	{
		if (MutantStack_DEBUG_MESSAGES)
			std::cout << "MutantStack Copy constructor called." << std::endl;
		*this = copy;
		return;
	};

	~MutantStack()										// Destructor
	{
		if (MutantStack_DEBUG_MESSAGES)
			std::cout << "MutantStack Destructor called" << std::endl;
		return;
	}
	////////////////////////////////////////////////////////////////////////////

	// Operator overloads
	////////////////////////////////////////////////////////////////////////////
	public:
	MutantStack& operator= (const MutantStack& assignment)
	{
		if (MutantStack_DEBUG_MESSAGES && MutantStack_ADD_VERBOSE)
			std::cout << "MutantStack Copy assignment operator called" << std::endl;
		if (this != &assignment)
		{
			this->c = assignment.c;
		}
		return(*this);
	}
	
	;	// Assignment operator
	////////////////////////////////////////////////////////////////////////////

	// Template defines / "Member types":
	////////////////////////////////////////////////////////////////////////////
	public:
	typedef typename Container::value_type				value_type;
	typedef typename Container::allocator_type			allocator_type;
	typedef typename Container::size_type				size_type;
	typedef typename Container::difference_type			difference_type;
	typedef typename Container::reference				reference;
	typedef typename Container::const_reference			const_reference;
	typedef typename Container::pointer					pointer;
	typedef typename Container::const_pointer			const_pointer;
	typedef typename Container::iterator				iterator;
	typedef typename Container::const_iterator			const_iterator;
	typedef typename Container::reverse_iterator		reverse_iterator;
	typedef typename Container::const_reverse_iterator	const_reverse_iterator;

	////////////////////////////////////////////////////////////////////////////

	// Pubic member variables & methods
	////////////////////////////////////////////////////////////////////////////
	public:
	iterator begin(void)
	{
		return (this->c.begin());
	}

	const_iterator begin(void) const
	{
		return (this->c.begin());
	}

	iterator end(void)
	{
		return (this->c.end());
	}

	const_iterator end(void) const
	{
		return (this->c.end());
	}

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
template<typename T>
std::ostream& operator<< (std::ostream& o, const MutantStack<T> & i)
{
	for (typename MutantStack<T>::const_iterator it = i.begin(); it != i.end(); it++)
		o << "| " << *it;
	o << "|" << std::endl;
	return (o);
}

#endif
