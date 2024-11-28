/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:51:36 by emencova          #+#    #+#             */
/*   Updated: 2024/11/28 15:33:26 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &original)
{
    *this = original;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &original)
{
    if(this != &original)
    {
        
    }
    return(*this);
}