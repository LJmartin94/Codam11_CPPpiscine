/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/24 21:08:36 by limartin      #+#    #+#                 */
/*   Updated: 2022/02/01 19:44:34 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "contact.class.hpp"

class Phonebook
{
	public:
	Phonebook(void);
	~Phonebook(void);
	int doCommand(std::string buf);
	
	private:
	Contact contents[8];
	int _contactsSaved;

	int ft_add();
	int ft_search();
	int ft_exit();
	int ft_error();
	int (Phonebook::*commands[4])();
	enum _CommandType { ADD, SEARCH, EXIT, ERROR};
};

#endif
