/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:48:55 by emencova          #+#    #+#             */
/*   Updated: 2024/12/01 09:46:02 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"


class Form
{
    private:
        const std::string _name;
        bool    _signed;
        const unsigned int _grade_sign;
        const int _grade_exec;

    public:
        Form();
        Form(const Form &original);
        Form &operator=(const Form &original);
        ~Form();  
        
        Form(const std::string name, const unsigned int grade_sign);
        std::string getName() const;
        int     getGradeSign() const;
        int     getGradeExec() const;
        bool    getIfSigned() const;
        void   beSigned(Bureaucrat &p);
        
/*
    class GradeTooLowtException : public std::exception
    {
        public:
            const char *what() const throw()
                {
                    return ("Grade is too low");
                }
        
    };

    class GradeTooHighException : public std::exception
    {
        const char *what() const throw()
                {
                    return ("Grade is too high!");
                }
    };    */                  
};

std::ostream&   operator<<( std::ostream& o, const Form &ref);

#endif