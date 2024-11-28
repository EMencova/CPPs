/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:48:55 by emencova          #+#    #+#             */
/*   Updated: 2024/11/28 22:56:23 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
    protected:
        const std::string _name;
        bool    _signed;
        const unsigned int _grade_sign;
        const int _grade_exec;

    public:
        AForm();
        AForm(const AForm &original);
        AForm &operator=(const AForm &original);
        virtual ~AForm();  
        
        AForm(const std::string name, const unsigned int grade_sign,const int grade_exec);
        std::string getName() const;
        int     getGradeSign() const;
        unsigned int     getGradeExec() const;
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
        public:
            const char *what() const throw()
                {
                    return ("Grade is too low, 1 is maximum!");
                }
    };
    
    class FormNotSignedException: public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("Form not signed!");
                }
        };
    
};

std::ostream&   operator<<( std::ostream& o, const AForm &ref);



#endif