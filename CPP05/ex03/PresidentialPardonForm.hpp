/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:51:51 by emencova          #+#    #+#             */
/*   Updated: 2024/11/29 17:50:38 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"


class PresidentialPardonForm : public AForm
{
    private:
    std::string _target;

    
    public:
    PresidentialPardonForm(const std::string &target);
    ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &original);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &original);
    void execute(const Bureaucrat & executor) const;
    const std::string getTarget() const;
};

std::ostream&   operator<<( std::ostream& o, const PresidentialPardonForm &ref);

#endif