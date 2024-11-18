/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:28:21 by emencova          #+#    #+#             */
/*   Updated: 2024/11/18 13:45:48 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

class Cure : public virtual AMateira
{
    public:
        Cure();
        Cure(const Cure &original);
        Cure &operator=(const Cure &original);
        ~Cure();

        void setType();
    
    
};
#endif