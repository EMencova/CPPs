/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:27:43 by emencova          #+#    #+#             */
/*   Updated: 2024/11/18 13:47:06 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

class Ice : virtual public AMateira
{
    public:
        Ice();
        Ice(const Ice &original);
        Ice &operator=(const Ice &original);
        ~Ice();

        void setType();
};


#endif