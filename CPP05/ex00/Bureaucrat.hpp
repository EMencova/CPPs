/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:24:26 by emencova          #+#    #+#             */
/*   Updated: 2024/11/27 12:03:01 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
    private:
        std::string _name;
        unsigned int _grade;
    
    public:
        Bureaucrat();
        Bureaucrat(std::string const name, unsigned int const grade);
        Bureaucrat(const Bureaucrat &original);
        Bureaucrat &operator=(const Bureaucrat &original);
        ~Bureaucrat();

        std::string getName() const;
        unsigned int getGrade() const;
        void increment();
        void decrement();
        
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("Grade is too low, 150 is mininum!");
                }
        };
        
        class GradeTooLowException: public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("Grade is too high, 1 is maximum!");
                }
        };
};

std::ostream&   operator<<( std::ostream& o, const Bureaucrat& original);

#endif