/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:53:14 by emencova          #+#    #+#             */
/*   Updated: 2024/11/28 14:46:42 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    
    public:
    RobotomyRequestForm();
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &original);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &original);
    
};


#endif