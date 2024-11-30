/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:48:55 by emencova          #+#    #+#             */
/*   Updated: 2024/11/30 15:23:49 by emencova         ###   ########.fr       */
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
        //getSigned()
        void   beSigned(Bureaucrat &p);
        

    class GradeTooLowtException : public std::exception
    {
        public:
            const char *what() const throw()
                {
                    return ("Grade is too low, 150 is minimumm!");
                }
        
    };

    class GradeTooHighException : public std::exception
    {
        const char *what() const throw()
                {
                    return ("Grade is too high, 1 is maximum!");
                }
    };                      
};

std::ostream&   operator<<( std::ostream& o, const Form &ref);

#endif