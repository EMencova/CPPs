/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:36:42 by emencova          #+#    #+#             */
/*   Updated: 2024/12/01 11:48:40 by eliskam          ###   ########.fr       */
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
    
        AForm* makeForm(const std::string &name,std::string &target) const;
    
    class noForm : public std::exception
	{
		public:
			virtual const char *what() const throw() { return ("No Form with the provided name.");}
	};
    
};

#endif