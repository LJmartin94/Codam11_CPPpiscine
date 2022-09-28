/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/28 08:14:07 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list> // For testing against list.

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
	// donatello.pop(); // Popping MutantStack before anything is on there segfaults, but so does the real std::stack
	// std::stack<int> seggsy;
	// seggsy.pop(); //Segfaults, even if you put it in a try-catch block.

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
	
	std::cout << std::endl << "=TESTS SPECIFIED BY SUBJECT =(MUTANTSTACK)======================================" << std::endl;
	MutantStack<int>	mstack;

	mstack.push(5); // Index 0
	mstack.push(17);

	std::cout << mstack.top() << std::endl; //Shows 17

	mstack.pop(); // Removes 17

	std::cout << mstack.size() << std::endl; // Prints size 1

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while ( it != ite) //prints 5, from index 0, then 3, 5, 737, 0.
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << std::endl << "================================================================================" << std::endl;

	while (!s.empty())
	{
		std::cout << s.top() << std::endl;
		s.pop();
	}
	
	std::cout << std::endl << "=TESTS SPECIFIED BY SUBJECT =(STD::LIST)========================================" << std::endl;
	std::list<int>	mlist;

	mlist.push_back(5); // Index 0
	mlist.push_back(17);

	std::cout << mlist.back() << std::endl; //Shows 17

	mlist.pop_back(); // Removes 17

	std::cout << mlist.size() << std::endl; // Prints size 1

	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);

	std::list<int>::iterator lit = mlist.begin();
	std::list<int>::iterator lite = mlist.end();

	++lit;
	--lit;
	while ( lit != lite) //prints 5, from index 0, then 3, 5, 737, 0.
	{
		std::cout << *lit << std::endl;
		++lit;
	}
	std::stack<int, std::list<int> > sl(mlist);

	std::cout << std::endl << "================================================================================" << std::endl;

	while (!sl.empty())
	{
		std::cout << sl.top() << std::endl;
		sl.pop();
	}

	return(0);
}
