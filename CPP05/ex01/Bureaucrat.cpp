/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:24:29 by emencova          #+#    #+#             */
/*   Updated: 2024/11/27 13:21:48 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : name("Unknown"), grade(150)
{
    std::cout<<"Bureaucrat default constructor called."<<std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, unsigned int const _grade) : name(_name), grade(_grade)
{
    std::cout<<"Bureaucrat "<<name<<" constructor called."<<std::endl;
    if (grade < 0)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooHighException();
    std::cout<<name<<" created!"<<std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &original)
{

    std::cout<<"Bureaucrat copy constructor called."<<std::endl;
    *this = original;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &original)
{
    std::cout<<"Bureaucrat copy assignment constructor called."<<std::endl;
    if (this != &original)
    {
        name = original.name;
        grade = original.grade;
    }
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout<<"Bureaucrat "<<name<<" destructor called."<<std::endl;
}

std::string Bureaucrat::getName()
{
    return (name);
}

unsigned int Bureaucrat::getGrade()
{
    return (grade);
}

void Bureaucrat::increment()
{
    grade -=1;
    if (grade < 1)
        throw Bureaucrat::GradeTooLowException();
    if(grade > 150)
        throw Bureaucrat::GradeTooHighException();
    
}
void Bureaucrat::decrement()
{
    grade += 1;
    if (grade < 1)
        throw Bureaucrat::GradeTooLowException();
    if(grade > 150)
        throw Bureaucrat::GradeTooHighException();  
}

void     Bureaucrat::signForm(std::string name, bool sign)
{ 
    if(sign)
        std::cout<<_name<<" signed "<<name<<std::end;
    else
        std::cout<<_name<<" couldn't sign "<<name<<" because he doesn't have the ability to do it,"<<std::endl;
}

std::ostream& operator<<(std::ostream &o, const Bureaucrat &ref) 
{
	o << "Bureaucrat name: " << ref.getName() << ", bureaucrat grade " << ref.getGrade();
    return (o);
}

