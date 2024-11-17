/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:59:29 by emencova          #+#    #+#             */
/*   Updated: 2024/11/17 22:09:10 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : virtual public AAnimal
{
    private:
        Brain *_brain;
        
    public:
        Dog();
        Dog(const Dog &original);
        Dog &operator=(const Dog &original);
        virtual ~Dog();


        void makeSound() const;
    
};

#endif