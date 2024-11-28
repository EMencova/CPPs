/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:51:51 by emencova          #+#    #+#             */
/*   Updated: 2024/11/28 15:20:12 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    public:
    PresidentialPardonForm();
    ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &original);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &original);
}


#endif