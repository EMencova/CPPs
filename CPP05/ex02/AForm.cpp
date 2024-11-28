/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:51:59 by emencova          #+#    #+#             */
/*   Updated: 2024/11/28 17:34:14 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): _target(""), _signed(false), _grade_sign(150), _grade_exec(150)
{
    std::cout<<"AForm constructor called."<<std::endl;
}

AForm::AForm(const std::string target, const unsigned int grade_sign) : _target(target), _signed(false), _grade_sign(grade_sign),_grade_exec(grade_sign - 1)
{ 
    std::cout<<"Bureaucrat "<<name<<" constructor called."<<std::endl;
    std::cout<<_name<<" created."<<std::endl;
}

AForm::AForm(const AForm &original) : _target (original._target),_signed(original._signed),_grade_sign (original._grade_sign),_grade_exec (original._grade_exec)
{
    std::cout<<"AForm copy constructor called."<<std::endl;
}

AForm &AForm::operator=(const AForm &original)
{
    _signed= original._signed;
    std::cout<<"AForm copy assignment constructor called."<<std::endl;
    return (*this);
}

AForm::~AForm()
{
    std::cout<<"AForm destructor called!"<<std::endl;
}

std::string AForm::getName()const
{
    return (_name);
}

int     AForm::getGradeSign() const
{
    return (_grade_sign);
}

int    AForm::getGradeExec() const
{
    return (_grade_exec);
}


void   AForm::beSigned(Bureaucrat &p)
{
    if(_signed)
    {
        std::cout<<_name<<" AForm is already signed."<<std::endl;
        return;
    }
    else if (p.getGrade() > _grade_sign)
    {
        p.signForm(_name,_signed);
        throw AForm::GradeTooLowException();
    }
    else
    {
        _signed = true;
        p.signForm(_name, _signed);
    }
}



std::ostream &	operator<<(std::ostream &o, AForm const &ref)
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


