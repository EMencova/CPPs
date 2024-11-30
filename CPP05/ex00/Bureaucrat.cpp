/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:24:29 by emencova          #+#    #+#             */
/*   Updated: 2024/11/30 11:03:03 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : _name("Unknown"), _grade(150)
{
    std::cout<<"Bureaucrat default constructor called."<<std::endl;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int const grade) : _name(name), _grade(grade)
{
    std::cout<<"Bureaucrat "<<_name<<" constructor called."<<std::endl;;
    if (_grade < 0)
        throw Bureaucrat::GradeTooHighException();
    if (_grade > 150)
        throw Bureaucrat::GradeTooHighException();
    std::cout<<_name<<" created!"<<std::endl;
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
        getName() = original.getName();
        _grade = original._grade;
    }
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout<<"Bureaucrat "<<_name<<" destructor called."<<std::endl;
}

std::string Bureaucrat::getName() const
{
    return (_name);
}

unsigned int Bureaucrat::getGrade() const
{
    return (_grade);
}

void Bureaucrat::increment()
{
    _grade -=1;
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if(_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    
}
void Bureaucrat::decrement()
{
    _grade += 1;
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if(_grade > 150)
        throw Bureaucrat::GradeTooLowException();  
}

std::ostream& operator<<(std::ostream &o, const Bureaucrat &ref) 
{
	o << "Bureaucrat name: " << ref.getName() << ", bureaucrat grade " << ref.getGrade();
    return (o);
}
