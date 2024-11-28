/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:51:51 by emencova          #+#    #+#             */
/*   Updated: 2024/11/28 22:26:21 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"


class PresidentialPardonForm : public AForm
{
    private:
    Bureaucrat &_target;

    
    public:
    PresidentialPardonForm(Bureaucrat &target);
    ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &original);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &original);
    void execute(Bureaucrat & executor) const;
};

std::ostream&   operator<<( std::ostream& o, const PresidentialPardonForm &ref);

#endif