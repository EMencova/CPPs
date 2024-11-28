/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:53:14 by emencova          #+#    #+#             */
/*   Updated: 2024/11/28 17:55:22 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
    std::string _target;
    
    public:
    RobotomyRequestForm();
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &original);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &original);

    virtual void     execute(Bureaucrat const & executor) const = 0;
    
};


#endif