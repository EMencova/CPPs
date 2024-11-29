/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:36:42 by emencova          #+#    #+#             */
/*   Updated: 2024/11/29 17:04:54 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "AForm.hpp"



class Intern
{
    private:
        typedef struct s_form
        {
            std::string type;
            AForm       *form;   
        }       t_form;
    public:
        Intern();
        ~Intern();
        Intern(const Intern &original);
        Intern &operator=(const Intern &original);
    
        AForm* makeForm(const std::string &name, const std::string &target) const;
    
};



#endif