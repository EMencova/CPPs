/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:48:55 by emencova          #+#    #+#             */
/*   Updated: 2024/11/28 17:42:53 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"


class AForm
{
    private:
        const std::string _target;
        bool    _signed;
        const unsigned int _grade_sign;
        const int _grade_exec;

    public:
        AForm();
        AForm(const AForm &original);
        AForm &operator=(const AForm &original);
        virtual ~AForm();  
        
        AForm(const std::string target, const unsigned int grade_sign, const unsigned int grade_exec);
        std::string getName() const;
        int     getGradeSign() const;
        int     getGradeExec() const;
        void   beSigned(Bureaucrat &p);
        virtual void     execute(Bureaucrat const & executor) const = 0;
        


    class GradeTooHightException : public std::exception
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

std::ostream&   operator<<( std::ostream& o, const Form &ref);



#endif