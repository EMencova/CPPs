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

    for (MutantStack<int>::iterator it = a.begin(); it != a.end(); i++)
        std::cout<<*it<<std::endl;

}