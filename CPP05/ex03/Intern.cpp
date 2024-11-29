/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:36:28 by emencova          #+#    #+#             */
/*   Updated: 2024/11/29 17:47:55 by emencova         ###   ########.fr       */
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

AForm* Intern::makeForm(const std::string &name, const std::string &target) const
{
    AForm *res = NULL;
    
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
            res = data[i].form;
            break;
        }
        else
            delete data[i].form;
    }

	if (res == NULL)
		std::cout << "Intern could not find the form " << name << std::endl;
	else
		std::cout << "Intern creates " << name << std::endl;
	return (res);
}
