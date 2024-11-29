/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:48:03 by emencova          #+#    #+#             */
/*   Updated: 2024/11/29 17:51:30 by emencova         ###   ########.fr       */
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
    std::string _target;

    
    public:
    ShrubberyCreationForm(const std::string &target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &original);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &original);
    void     execute(Bureaucrat const &executor) const;
    const std::string getTarget() const;

};

std::ostream&   operator<<( std::ostream& o, const ShrubberyCreationForm &ref);


#endif