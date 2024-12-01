/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:24:26 by emencova          #+#    #+#             */
/*   Updated: 2024/12/01 09:36:40 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>


class Bureaucrat
{
    private:
        const std::string _name;
        unsigned int _grade;
    
    public:
        Bureaucrat();
        Bureaucrat(std::string name, unsigned int const grade);
        Bureaucrat(const Bureaucrat &original);
        Bureaucrat &operator=(const Bureaucrat &original);
        ~Bureaucrat();

        std::string getName() const;
        unsigned int getGrade() const;
        void increment();
        void decrement();
        void    signForm(std::string name, bool sign);
        
        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("Grade is too low!");
                }
        };
        
        class GradeTooHighException: public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("Grade is too high!");
                }
        };
};

//std::ostream&   operator<<( std::ostream& o, const Bureaucrat& ref);


#endif