/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:53:14 by emencova          #+#    #+#             */
/*   Updated: 2024/12/01 11:47:16 by eliskam          ###   ########.fr       */
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
    std::string &_target;
    
    public:
    RobotomyRequestForm(std::string &target);
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &original);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &original);

    void     execute(const Bureaucrat & executor) const;
    
};

std::ostream&   operator<<( std::ostream& o, const RobotomyRequestForm &ref);


#endif