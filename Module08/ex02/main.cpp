/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/28 07:25:07 by limartin      ########   odam.nl         */
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
	std::cout << std::endl << "=MY OWN PRELIMINARY TESTING ====================================================" << std::endl;
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

	MutantStack<int>::value_type i;
	i = 42;
	MutantStack<int>::pointer ptr = &i;
	std::cout << std::endl << "These Member types are usable as stand-ins for the types they represent: " << *ptr << std::endl;

	////////////////////////////////////////////////////////////////////////////////////////

	// Showing that iterators work.

	MutantStack<char> leonardo;
	leonardo.push('l');
	leonardo.push('e');
	leonardo.push('o');
	
	std::cout << "Leonardo: " << *leonardo.begin() << *(leonardo.begin()+1) << *(leonardo.end()-1);
	std::cout << std::endl;
	
	leonardo.push('n');
	leonardo.push('a');
	leonardo.push('r');
	leonardo.push('d');
	leonardo.push('o');

	*leonardo.begin() = 'L';
	std::cout << leonardo;
	std::cout << std::endl << "================================================================================" << std::endl;
	

	return(0);
}
