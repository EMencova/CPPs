/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:51:59 by emencova          #+#    #+#             */
/*   Updated: 2024/11/28 14:43:29 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name(""), _signed(false), _grade_sign(150), _grade_exec(150)
{
    std::cout<<"Form constructor called."<<std::endl;
}

Form::Form(const std::string name, const unsigned int grade_sign) : _name(name), _signed(false), _grade_sign(grade_sign),_grade_exec(grade_sign - 1)
{ 
    std::cout<<"Bureaucrat "<<name<<" constructor called."<<std::endl;
    std::cout<<_name<<" created."<<std::endl;
}

Form::Form(const Form &original) : _name (original._name),_signed(original._signed),_grade_sign (original._grade_sign),_grade_exec (original._grade_exec)
{
    std::cout<<"Form copy constructor called."<<std::endl;
}

Form &Form::operator=(const Form &original)
{
    _signed= original._signed;
    std::cout<<"Form copy assignment constructor called."<<std::endl;
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

bool    Form::getIfSigned() const
{
    return(_signed);
}


void   Form::beSigned(Bureaucrat &p)
{
    if(_signed)
    {
        std::cout<<_name<<" Form is already signed."<<std::endl;
        return;
    }
    else if (p.getGrade() > _grade_sign)
    { 
        p.signForm(_name,_signed);
        throw Bureaucrat::GradeTooLowException();
    }
    else
    {
        _signed = true;
        p.signForm(_name, _signed);
    }
}



std::ostream &	operator<<(std::ostream &o, Form const &ref)
{
	o << "Form name : " << ref.getName() << std::endl;
	o << "Signed : ";
	if (ref.getGradeSign())
		o << "True" << std::endl;
	else
		o << "False" << std::endl;
	o << "Need to be grade " << ref.getGradeSign() << " to sign it, and grade " << ref.getGradeExec() << " to execute it.";
	return o;
}


