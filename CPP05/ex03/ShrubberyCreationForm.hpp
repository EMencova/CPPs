/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:48:03 by emencova          #+#    #+#             */
/*   Updated: 2024/12/01 11:47:40 by eliskam          ###   ########.fr       */
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
    std::string &_target;

    
    public:
    ShrubberyCreationForm(std::string &target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &original);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &original);
    void     execute(const Bureaucrat &executor) const;

};

std::ostream&   operator<<( std::ostream& o, const ShrubberyCreationForm &ref);


#endif