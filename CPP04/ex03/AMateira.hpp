/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateira.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:55:13 by emencova          #+#    #+#             */
/*   Updated: 2024/11/18 13:49:37 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATEIRA_HPP
# define AMATEIRA_HPP

#include <iostream>


class AMateira
{
    protected:
        std::string     _type;


    public:
    
        AMateira();
        AMateira(std::string const &type);
        AMateira(const AMateira &original);
        AMateira &operator=(const AMateira &original);
        ~AMateira();

        virtual AMateira* clone() const = 0;
        std::string const &getType() const;
        virtual void use(ICharater &target);
          
};


#endif