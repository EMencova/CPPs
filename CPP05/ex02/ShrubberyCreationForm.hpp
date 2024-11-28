/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:48:03 by emencova          #+#    #+#             */
/*   Updated: 2024/11/28 22:40:27 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "AForm.hpp"
# include <fstream>


class ShrubberyCreationForm : public AForm
{
    private:
    Bureaucrat &_target;

    
    public:
    ShrubberyCreationForm(Bureaucrat &target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &original);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &original);
    void     execute(Bureaucrat const &executor) const;

};

std::ostream&   operator<<( std::ostream& o, const ShrubberyCreationForm &ref);


#endif