/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:11:38 by emencova          #+#    #+#             */
/*   Updated: 2024/11/18 20:52:02 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"


class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria *inv[4];
        
    public:
        Character();
        Character(std::string name);
        Character(const Character &original);
        Character &operator=(const Character &original);
        ~Character();

        void    equip(AMateira *m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        std::string const &getName() const;
        
        
};

#endif