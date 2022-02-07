/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/24 21:08:36 by limartin      #+#    #+#                 */
/*   Updated: 2022/02/07 14:15:44 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "contact.class.hpp"
#include <iostream> //stream operators
#include <iomanip> //setting width modifiers
#include <string> //string datatype
#include <sstream> //string stream for string to int conversion

class Phonebook
{
	public:
	Phonebook(void);
	~Phonebook(void);
	int doCommand(std::string buf);
	
	private:
	Contact _contactArray[8];
	int _contactsSaved;

	int 		ft_add();
	int		 	ft_search();
	int 		ft_exit();
	int 		ft_error();
	std::string	util_truncate(std::string str);

	int (Phonebook::*commands[4])();
	enum _CommandType { ADD, SEARCH, EXIT, ERROR};
};

#endif
