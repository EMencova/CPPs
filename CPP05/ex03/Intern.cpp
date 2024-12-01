/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:36:28 by emencova          #+#    #+#             */
/*   Updated: 2024/12/01 11:48:31 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}
Intern::~Intern(){}

Intern::Intern(const Intern &original)
{
    *this = original;
}
Intern &Intern::operator=(const Intern &original)
{
    (void) original;
    return(*this);
}

AForm* Intern::makeForm(const std::string &name,std::string &target) const
{
    t_form data[] = 
    {
        {"presidential pardon", new PresidentialPardonForm(target)},
        {"robotomy request", new RobotomyRequestForm(target)},
        {"shrubbery creation", new ShrubberyCreationForm(target)},
        {"", NULL}
    };

    for (int i = 0; data[i].form != NULL; i++)
    {
        if (data[i].type == name)
        {
            std::cout << "Intern creates " << name << std::endl;
            return (data[i].form);
        }
        delete data[i].form;
    }
    throw noForm();
}


