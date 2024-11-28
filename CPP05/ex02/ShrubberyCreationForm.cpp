/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:47:55 by emencova          #+#    #+#             */
/*   Updated: 2024/11/28 17:56:44 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137)
{
    _target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
        
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &original)
{
    *this = original;      
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &original)
{
    if(this != &original)
    {
        _target = original._target;   
    }
    return(*this)
        
}