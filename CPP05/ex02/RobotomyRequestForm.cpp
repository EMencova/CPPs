/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:52:51 by emencova          #+#    #+#             */
/*   Updated: 2024/12/01 10:56:09 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string &target): AForm("RobotomyRequestForm", 72,45), _target(target)
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
    if (getIfSigned() == false)
        throw AForm::FormNotSignedException();

    if (executor.getGrade() > getGradeExec())
        throw AForm::GradeTooLowException(); 
        
    std::cout << "Drilling noises.." << std::endl;
    srand(time(NULL));
    int nbr = rand() % 2;
    if (nbr == 0)
        std::cout << _target << " has been robotomized." << std::endl;
    else
        std::cout << _target << " was not robotomized." << std::endl;
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