/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:55:12 by emencova          #+#    #+#             */
/*   Updated: 2024/11/17 22:09:16 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "AAnimal.hpp"

class WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &original);
        WrongAnimal &operator=(const WrongAnimal &original);
        virtual ~WrongAnimal();
        
        std::string getType() const;
        void makeSound() const; // if set to virtual then wrong cat sound would override
};


#endif