/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/01 16:46:28 by limartin      #+#    #+#                 */
/*   Updated: 2022/04/03 16:03:46 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl karl;
	karl.complain("ERR");
	karl.complain("error");
	karl.complain("lmao");
	
	karl.complain("INFO");
	karl.complain("DEBUG");
	karl.complain("WARNING");
	karl.complain("ERROR");
	return (0);
}
