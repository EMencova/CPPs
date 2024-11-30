/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:24:26 by emencova          #+#    #+#             */
/*   Updated: 2024/11/30 15:43:52 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "AForm.hpp"

class AForm;
class Bureaucrat
{
    private:
        const std::string _name;
        unsigned int _grade;
    
    public:
        Bureaucrat();
        Bureaucrat(const std::string name, unsigned int const grade);
        Bureaucrat(const Bureaucrat &original);
        Bureaucrat &operator=(const Bureaucrat &original);
        ~Bureaucrat();

        std::string getName();
        unsigned int getGrade() const;
        void increment();
        void decrement();
        void    signForm(std::string name, bool sign);
        void    executeForm(const AForm & form);
        
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("Grade is too high!");
                }
        };
        
        class GradeTooLowException: public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("Grade is too low!");
                }
        };
};

//std::ostream&   operator<<( std::ostream& o, const Bureaucrat& ref);


#endif