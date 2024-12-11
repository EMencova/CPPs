/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:21:19 by emencova          #+#    #+#             */
/*   Updated: 2024/12/11 17:03:25 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    int pick = std::rand() % 3;

    switch(pick)
    {
        case 0:
        {
            std::cout<<"New A created."<<std::endl;
            return (new A());
        }
        case 1:
        {
            std::cout<<"New B created."<<std::endl;
            return (new B());
        }
        case 2:
        {
            std::cout<<"New C created."<<std::endl;
            return (new C());
        }
        default:
            return(NULL);      
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout<<"A"<<std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout<<"B"<<std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout<<"C"<<std::endl;
}

void identify(Base& p)
{
    try 
    {
        (dynamic_cast<A&>(p))
        std::cout<<"A"<<std::endl;
    }
    try
    {
        (dynamic_cast<B&>(p))
        std::cout<<"B"<<std::endl;
    }
    else if (dynamic_cast<C&>(p))
        std::cout<<"C"<<std::endl;
    
}

int	main() {
	Base *	ptr = generate();

	identify(ptr);
	identify(*ptr);

	delete ptr;

	return 0;
}