/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:13:54 by emencova          #+#    #+#             */
/*   Updated: 2024/11/19 12:32:35 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

    private:
        AMateria *inv[4];
    
    public:

        MateriaSource();
        MateriaSource(const MateriaSource &original);
        MateriaSource &operator=(const MateriaSource &original);
        virtual ~MateriaSource();
        
        void		learnMateria(AMateria* amat);
	    AMateria*	createMateria(std::string const &type);    
    
};

#endif