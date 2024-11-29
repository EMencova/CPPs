/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:52:51 by emencova          #+#    #+#             */
/*   Updated: 2024/11/29 11:30:03 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(Bureaucrat &target): AForm("RobotomyRequestForm", 72,45), _target(target)
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

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    if (_signed)
        throw AForm::FormNotSignedException();

    if (executor.getGrade() > getGradeExec())
        throw AForm::GradeTooLowException(); 
        
    std::cout << "Some noise" << std::endl;
    int nbr = rand() % 100 + 1;
    if (nbr % 2 == 0)
        std::cout << this->_target.getName() << " has been robotomized." << std::endl;
    else
        std::cout << this->_target.getName() << " was not robotomized." << std::endl;
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