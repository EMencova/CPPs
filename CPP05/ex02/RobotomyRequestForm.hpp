/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:53:14 by emencova          #+#    #+#             */
/*   Updated: 2024/11/28 22:58:08 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <cstdlib>

class RobotomyRequestForm : public AForm
{
    private:
    Bureaucrat &_target;
    
    public:
    RobotomyRequestForm(Bureaucrat &target);
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &original);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &original);

    void     execute(const Bureaucrat & executor) const;
    
};

std::ostream&   operator<<( std::ostream& o, const RobotomyRequestForm &ref);


#endif