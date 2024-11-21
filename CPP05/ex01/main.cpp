/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:24:22 by emencova          #+#    #+#             */
/*   Updated: 2024/11/21 15:26:52 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try 
    {
        Bureaucrat test1("El", 140);
      //  std::cout<<test1.getGrade()<<std::endl;
        for (int i = 0; i < 11; i++)
        {
            std::cout<<test1.getGrade()<<std::endl;
            test1.decrement();
        } 
    }
    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cout<<"Exception caught - "<< e.what()<<std::endl;
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cout<<"Exception caught - "<< e.what()<<std::endl;
    }


    try 
    {
        Bureaucrat test2("Ha", 10);
       // std::cout<<test2.getGrade()<<std::endl;
        for (int i = 0; i < 11; i++)
        {
            std::cout<<test2.getGrade()<<std::endl;
            test2.increment();
        } 
    }
    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cout<<"Exception caught - "<< e.what()<<std::endl;
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cout<<"Exception caught - "<< e.what()<<std::endl;
    }
}