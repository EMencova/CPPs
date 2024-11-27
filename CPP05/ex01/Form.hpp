/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:48:55 by emencova          #+#    #+#             */
/*   Updated: 2024/11/27 13:01:33 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"


class Form
{
    private:
        std::string const _name;
        bool    _signed;
        unsigned int const _grade_sign;
        unsigned int const _grade_exec;

    public:
        Form();
        Form(const Form &original);
        Form &operator=(const Form &original);
        ~Form();  
        
        Form(std::string name, unsigned int grade_sign);
        std::string getName() const;
        int     getGradeSign() const;
        int     getGradeExec() const;
        bool   beSigned(Bureaucrat);


    class GradeTooHightException : public std::excpetion
    {
        public:
            const char *what() const throw()
                {
                    return ("Grade is too low, 150 is mininum!");
                }
        
    };

    class GradeTooLowException : public std::exception
    {
        const char *what() const throw()
                {
                    return ("Grade is too low, 1 is maximum!");
                }
    };
                        
    
};

std::ostream&   operator<<( std::ostream& o, const Bureaucrat& ref);



#endif