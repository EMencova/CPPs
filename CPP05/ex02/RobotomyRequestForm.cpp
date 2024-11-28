/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:52:51 by emencova          #+#    #+#             */
/*   Updated: 2024/11/28 17:56:28 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    
}
RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm(target, 72,45)
{
    _target = target;
}
RobotomyRequestForm:: ~RobotomyRequestForm()
{
    
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &original)
{
    *this = original;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &original)
{
    if(this != &original)
    {
        _target = original._target;
    }
    return(*this);
    
}