/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:48:03 by emencova          #+#    #+#             */
/*   Updated: 2024/11/28 17:55:27 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "AForm.hpp"


class ShrubberyCreationForm : public AForm
{
    private:
    std::string _target;

    
    public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &original);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &original);
    void     execute(Bureaucrat const &executor) const;
};



#endif