/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-18 12:01:24 by emencova          #+#    #+#             */
/*   Updated: 2024-12-18 12:01:24 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> a;

    a.push(10);
    a.push(20);
    a.push(30);
    a.push(40);
    a.push(50);

    for (MutantStack<int>::iterator it = a.begin(); it != a.end(); it++)
        std::cout<<*it<<std::endl;

    std::cout<<"_____________________________"<<std::endl;
    std::cout<<std::endl;

    a.pop();
    for (MutantStack<int>::iterator it = a.begin(); it != a.end(); it++)
        std::cout<<*it<<std::endl;

}


/*

///MAIN FROM SUBJECT

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}*/