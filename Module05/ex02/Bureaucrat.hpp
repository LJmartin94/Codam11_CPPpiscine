/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:42 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/02 01:29:06 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream> // Stream operators
#include "Form.hpp" // Used in signForm() member function
class Form;

# define Bureaucrat_DEBUG_MESSAGES 1
# define Bureaucrat_ADD_VERBOSE 1

class Bureaucrat
{
	// Constructors & Destructors
	////////////////////////////////////////////////////////////////////////////
	public:
	// Default constructor
	Bureaucrat(std::string name = "Bob", unsigned int grade = 75);
	
	Bureaucrat(const Bureaucrat& copy);			// Copy constructor
	~Bureaucrat();								// Destructor
	////////////////////////////////////////////////////////////////////////////

	// Operator overloads
	////////////////////////////////////////////////////////////////////////////
	public:
	Bureaucrat& operator= (const Bureaucrat& assignment);	// Assignment operator
	////////////////////////////////////////////////////////////////////////////

	// Pubic member variables & methods
	////////////////////////////////////////////////////////////////////////////
	public:
	void				signForm(Form& formToSign) const;
	////////////////////////////////////////////////////////////////////////////

	// Protected member variables & methods
	////////////////////////////////////////////////////////////////////////////
	protected:
	////////////////////////////////////////////////////////////////////////////

	// Private member variables & methods
	////////////////////////////////////////////////////////////////////////////
	private:
	const std::string	_name;
	unsigned int		_grade;
	////////////////////////////////////////////////////////////////////////////

	// Accessors
	////////////////////////////////////////////////////////////////////////////
	public:
	const std::string	Get_name(void) const;
	unsigned int		Get_grade(void) const;

	void				Decrement_grade(void);
	void				Increment_grade(void);
	////////////////////////////////////////////////////////////////////////////

	// Nested classes
	////////////////////////////////////////////////////////////////////////////
	private:
	class GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw()
			{
				return ("Exception: Grade too high. (Bureaucrat::GradeTooHighException)");
			}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw()
			{
				return ("Exception: Grade too low. (Bureaucrat::GradeTooLowException)");
			}
	};
	////////////////////////////////////////////////////////////////////////////
};

// Stream operator overload
std::ostream& operator<< (std::ostream& o, Bureaucrat const & i);

#endif
