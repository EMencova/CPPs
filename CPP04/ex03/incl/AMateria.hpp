/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:55:13 by emencova          #+#    #+#             */
/*   Updated: 2024/11/18 22:00:45 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;
class AMateria
{
    protected:
        std::string     _type;

    public:
        AMateria();
        AMateria(std::string const &type);
        AMateria(const AMateria &original);
        AMateria &operator=(const AMateria &original);
        virtual ~AMateria();

        virtual AMateria* clone() const = 0;
        std::string const &getType() const;
        virtual void use(ICharacter &target);      
          
};

#endif