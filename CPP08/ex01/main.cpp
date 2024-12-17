/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-16 14:58:18 by emencova          #+#    #+#             */
/*   Updated: 2024-12-16 14:58:18 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        Span a(5);

        a.addNumber(5);
        a.addNumber(6);
        a.addNumber(11);
        a.addNumber(30);
        a.addNumber(9);
        //a.addNumber(10);
        std::cout<<"Numbers inside the container are:\n "<<std::endl;
        a.display();
    }
    catch (std::exception &e)
    {
        std::cout<<e.what()<<std::endl;
    }
    try
    {
        Span a(5);
        a.addNumber(5);
        a.addNumber(6);
        a.addNumber(11);
        a.addNumber(30);
        a.addNumber(9);
        std::cout<<"__________________________"<<std::endl;
        std::cout<<std::endl;
        std::cout<<"Longest span is: "<<a.longestSpan()<<std::endl;

    }
    catch(std::exception &e)
    {
        std::cout<<e.what()<<std::endl;
    }

    try
    {
        Span a(5);
        a.addNumber(5);
        a.addNumber(6);
        a.addNumber(11);
        a.addNumber(30);
        a.addNumber(9);
        std::cout<<"__________________________"<<std::endl;
        std::cout<<std::endl;
        std::cout<<"Shortest span is: "<<a.shortestSpan()<<std::endl; 
    }
    catch(std::exception &e)
    {
        std::cout<<e.what()<<std::endl;
    }

}