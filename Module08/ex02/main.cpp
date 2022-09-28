/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/28 05:37:01 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
void showAndPopTillEnd(MutantStack<T>& stack)
{
	while (!stack.empty())
	{
		std::cout << stack.top() << std::endl;
		stack.pop();
	}
	return;
}

int main(void)
{
	MutantStack<int> donatello;
	donatello.push(42); // FILO -> First in, last out.
	donatello.push(41);
	donatello.push(40);
	donatello.push(39);
	donatello.push(38);
	donatello.push(37);
	donatello.push(36);
	MutantStack<int> raphael(donatello);
	
	std::cout << std::endl << "Don:  " << std::endl;
	showAndPopTillEnd(donatello);
	showAndPopTillEnd(donatello); // Will only show once, because popping destroys the stack
	std::cout << std::endl << "Raph: " << std::endl;
	showAndPopTillEnd(raphael);




	return(0);
}
