/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:51:36 by emencova          #+#    #+#             */
/*   Updated: 2024/11/30 16:34:41 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): AForm("PresidentialPardonForm", 25, 5), _target(target)
{ 
    std::cout<<"PresidentialPardonForm default constructor called."<<std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout<<"PresidentialPardonForm destructor called."<<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &original)
    : AForm(original), _target(original._target) // Explicitly initialize the base class and _target
{
    std::cout << "PresidentialPardonForm copy constructor called." << std::endl;
}


PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &original)
{
    std::cout<<"PresidentialPardonForm copy assignment constructor called."<<std::endl;
    if (this != &original)
        _target = original._target;
        
    return(*this);
}

const std::string PresidentialPardonForm::getTarget() const
{
    return (_target);
}

void	PresidentialPardonForm::execute(const Bureaucrat & executor) const
{
	if (!_signed)
        throw AForm::FormNotSignedException();
    else if (executor.getGrade() > getGradeExec())
        throw AForm::GradeTooLowException(); 
	else if (_signed == true)
		std::cout << getTarget() << " has been pardoned." << std::endl;
	else
		std::cout << _name << " not signed, cannot be executed." << std::endl;
}

std::ostream &	operator<<(std::ostream &o, PresidentialPardonForm const &ref)
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