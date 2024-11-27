/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:51:59 by emencova          #+#    #+#             */
/*   Updated: 2024/11/27 13:56:07 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{
    std::cout<<"Form constructor called."<<std::endl;
}

Form::Form(std::string name, unsigned int const grade_sign) : _name(name), _grade_sign(grade_sign)
{ 
    std::cout<<"Bureaucrat "<<name<<" constructor called."<<std::endl;
    std::cout<<_name<<" created."<<std::endl;
}

Form::Form(const Form &original)
{
    std::cout<<"Form copy constructor called."<<std::endl;
    *this = original;
}

Form &Form::operator=(const Form &original)
{
    std::cout<<"Form copy assignment constructor called."<<std::endl;
    if (this != &original)
    {
        _name = original._name;
        _grade = original._grade;
        _grade_sign = original._grade_sign;
        _grade_exec = original._grade_exec;
    }
    return (*this);
}

Form::~Form()
{
    std::cout<<"Form destructor called!"<<std::endl;
}

std::string Form::getName()const
{
    return (_name);
}

int     Form::getGradeSign() const
{
    return (_grade_sign);
}

int    Form::getGradeExec() const
{
    return (_grade_exec);
}


void   Form::beSigned(Bureaucrat &p)
{
    if(_signed)
    {
        std::cout
    }
    if
}



std::ostream &	operator<<(std::ostream & o, Form const &rSym) {
	o << "Form name : " << rSym.getName() << std::endl;
	o << "Signed : ";
	if (rSym.getSigned())
		o << "True" << std::endl;
	else
		o << "False" << std::endl;
	o << "Need to be grade " << rSym.getSignGrade() << " to sign it, and grade " << rSym.getExecuteGrade() << " to execute it.";
	return o;
}


