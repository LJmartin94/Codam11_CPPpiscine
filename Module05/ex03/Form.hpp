/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:42 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/05 17:57:58 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream> // Stream operators
#include "Bureaucrat.hpp" // Used in beSigned() member function
class Bureaucrat;

# define Form_DEBUG_MESSAGES 1
# define Form_ADD_VERBOSE 1

class Form
{
	// Constructors & Destructors
	////////////////////////////////////////////////////////////////////////////
	public:
	// Default constructor
	Form(std::string name = "Blank", std::string target = "None",\
	unsigned int to_sign = 150, unsigned int to_execute = 150);
	Form(const Form& copy);						// Copy constructor
	virtual ~Form();									// Destructor
	////////////////////////////////////////////////////////////////////////////

	// Operator overloads
	////////////////////////////////////////////////////////////////////////////
	public:
	Form& operator= (const Form& assignment);	// Assignment operator
	////////////////////////////////////////////////////////////////////////////

	// Pubic member variables & methods
	////////////////////////////////////////////////////////////////////////////
	public:
	virtual void	execute(const Bureaucrat& executor) const = 0;
	////////////////////////////////////////////////////////////////////////////

	// Protected member variables & methods
	////////////////////////////////////////////////////////////////////////////
	protected:
	bool			check_executable(const Bureaucrat& executor) const;
	////////////////////////////////////////////////////////////////////////////

	// Private member variables & methods
	////////////////////////////////////////////////////////////////////////////
	private:
	const std::string	_name;
	const std::string	_target;
	bool				_signed;
	const unsigned int	_signGrade;
	const unsigned int	_executeGrade;
	////////////////////////////////////////////////////////////////////////////

	// Accessors
	////////////////////////////////////////////////////////////////////////////
	public:
	std::string		Get_name(void) const;
	bool			Get_signed(void) const;
	unsigned int	Get_signGrade(void) const;
	unsigned int	Get_executeGrade(void) const;
	std::string		Get_target(void) const;

	void			beSigned(const Bureaucrat& signer); // Basically Set_signed
	////////////////////////////////////////////////////////////////////////////

	// Nested classes
	////////////////////////////////////////////////////////////////////////////
	private:
	class GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw()
			{
				return ("Exception: Grade too high. (Form::GradeTooHighException)");
			}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw()
			{
				return ("Exception: Grade too low. (Form::GradeTooLowException)");
			}
	};

	class FormUnsignedException : public std::exception
	{
		public:
			const char *what() const throw()
			{
				return ("Exception: Form has not yet been signed. (Form::FormUnsignedException)");
			}
	};

	public:
	class NoSuchFormException : public std::exception
	{
		public:
			const char *what() const throw()
			{
				return ("Exception: The requested Form does not exist. (Form::NoSuchFormException)");
			}
	};
	////////////////////////////////////////////////////////////////////////////
};

// Stream insertion operator overload
std::ostream& operator<< (std::ostream& o, Form const & i);

#endif
