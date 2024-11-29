/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:52:51 by emencova          #+#    #+#             */
/*   Updated: 2024/11/29 17:51:09 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): AForm("Robocop", 72,45), _target(target)
{
    std::cout<<"RobotomyRequestForm default contructor called."<<std::endl;
}
RobotomyRequestForm:: ~RobotomyRequestForm()
{
    std::cout<<"RobotomyRequestForm destructor called."<<std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &original):AForm(original), _target(original._target)
{
    std::cout<<"RobotomyRequestForm copy contructor called."<<std::endl;
    *this = original;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &original)
{
    std::cout<<"RobotomyRequestForm copy assignment contructor called."<<std::endl;
    if(this != &original)
    {
        _target = original._target;
    }
    return(*this);
    
}

const std::string RobotomyRequestForm::getTarget() const
{
    return (_target);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    if (!_signed)
        throw AForm::FormNotSignedException();

    else if (executor.getGrade() > getGradeExec())
        throw AForm::GradeTooLowException(); 
        
    std::cout << "Some noise" << std::endl;
    int nbr = rand() % 100 + 1;
    if (nbr % 2 == 0)
        std::cout << this->_target<< " has been robotomized." << std::endl;
    else
        std::cout << this->_target<< " was not robotomized." << std::endl;
}


std::ostream &	operator<<(std::ostream &o, RobotomyRequestForm const &ref)
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