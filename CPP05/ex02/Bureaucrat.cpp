/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:24:29 by emencova          #+#    #+#             */
/*   Updated: 2024/11/30 17:04:21 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : _name("Unknown"), _grade(150)
{
    std::cout<<"Bureaucrat default constructor called."<<std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int const grade) : _name(name), _grade(grade)
{
    std::cout<<"Bureaucrat "<<_name<<" constructor called."<<std::endl;
    if (_grade < 1)
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
        throw Bureaucrat::GradeTooLowException();
    if(_grade > 150)
        throw Bureaucrat::GradeTooHighException();
    
}
void Bureaucrat::decrement()
{
    _grade += 1;
    if (_grade < 1)
        throw Bureaucrat::GradeTooLowException();
    if(_grade > 150)
        throw Bureaucrat::GradeTooHighException();  
}

void     Bureaucrat::signForm(std::string name, bool sign)
{ 
    if(sign)
        std::cout<<_name<<" signed "<<name<<std::endl;
    else
        std::cout<<_name<<" couldn't sign "<<_name<<" because he doesn't have the ability to do it,"<<std::endl;
}


void	Bureaucrat::executeForm(const AForm& form)
{
	if (_grade > form.getGradeExec()) {
		std::cout << _name << " can't execute " << form.getName() << "." << std::endl;
		throw AForm::GradeTooLowException();
	}
	std::cout << _name << " executed " << form.getName() << "." << std::endl;
}
 /*
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
*/
