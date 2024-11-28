/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:51:51 by emencova          #+#    #+#             */
/*   Updated: 2024/11/28 17:55:12 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
    std::string _target;

    
    public:
    PresidentialPardonForm();
    ~PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm &original);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &original);
}


#endif