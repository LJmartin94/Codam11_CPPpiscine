/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/01 16:46:31 by limartin      #+#    #+#                 */
/*   Updated: 2022/04/01 18:34:21 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>  //string datatype
#include <iostream> //stream operators

class Harl
{
	public:
	Harl();
	~Harl();

	void	complain ( std::string level );
	
	private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
};

#endif
