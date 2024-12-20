/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:58:18 by emencova          #+#    #+#             */
/*   Updated: 2024/12/18 00:03:46 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int main()
{
     Span a(5);

        a.addNumber(15);
        a.addNumber(35);
        a.addNumber(18);
        a.addNumber(30);
        a.addNumber(9);
    try
    {
       // a.addNumber(35); //out of range
        std::cout<<"Numbers inside the container are:\n "<<std::endl;
        a.display();
    }
    catch (std::exception &e)
    {
        std::cout<<e.what()<<std::endl;
    }
    try
    {
       // a.addNumber(9);
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
       // a.addNumber(9);
        std::cout<<"__________________________"<<std::endl;
        std::cout<<std::endl;
        std::cout<<"Shortest span is: "<<a.shortestSpan()<<std::endl; 
    }
    catch(std::exception &e)
    {
        std::cout<<e.what()<<std::endl;
    }
    try
    {
        std::cout<<"__________________________"<<std::endl;
        std::cout<<std::endl;
        std::cout<<"Adding range of numbers: "<<std::endl; 
        Span b(11000);
        b.addRange(1,10);
        b.display();
        std::cout<<"Shortest span is: "<<b.shortestSpan()<<std::endl;
        std::cout<<"Longest span is: "<<b.longestSpan()<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

/*

///MAIN FROM SUBJECT

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}*/