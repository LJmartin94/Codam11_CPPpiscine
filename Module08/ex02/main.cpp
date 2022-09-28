/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/28 06:41:05 by limartin      ########   odam.nl         */
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

	// TESTING CONSTRUCTORS, COPY CONS, ASSIGNMENT OPERATORS ETC,
	// MEMBER FUNCTIONS INHERITED FROM STD::STACK

	////////////////////////////////////////////////////////////////////////////////////////
	MutantStack<int> donatello;
	donatello.push(42); // FILO -> First in, last out.
	donatello.push(41);
	donatello.push(40);
	donatello.push(39);
	donatello.push(38);
	donatello.push(37);
	donatello.push(36);
	
	MutantStack<int> raphael(donatello);
	std::cout << "Copied from don to raph, raph is now: " << raphael.size() << std::endl;

	std::cout << "I'm basically just testing if everything inherited from std::stack works: " << std::endl;
	if (raphael.top() == donatello.top())
		std::cout << "It seems to be." << std::endl;
	else
		std::cout << "Uh oh." << std::endl;
	
	std::cout << std::endl << "Don:  " << std::endl;
	showAndPopTillEnd(donatello);
	showAndPopTillEnd(donatello); // Will only show once, because popping destroys the stack
	donatello = raphael; // We copy from raph to don before destroying raph.
	std::cout << std::endl << "Raph: " << std::endl;
	showAndPopTillEnd(raphael);
	std::cout << std::endl << "Don again:" << std::endl;
	showAndPopTillEnd(donatello);

	////////////////////////////////////////////////////////////////////////////////////////


	return(0);
}
