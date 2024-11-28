/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:48:03 by emencova          #+#    #+#             */
/*   Updated: 2024/11/28 14:47:11 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "AForm.hpp"


class ShrubberyCreationForm : public AForm
{
    public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &original);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &original);
};



#endif