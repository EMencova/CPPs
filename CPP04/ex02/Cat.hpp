/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:57:42 by emencova          #+#    #+#             */
/*   Updated: 2024/11/17 22:08:37 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : virtual public AAnimal
{
    private:
        Brain *_brain;
    public:
        Cat();
        Cat(const Cat &original);
        Cat &operator=(const Cat &original);
        virtual ~Cat();

        void makeSound() const;
};


#endif