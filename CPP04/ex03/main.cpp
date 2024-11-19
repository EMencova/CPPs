/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:43:25 by emencova          #+#    #+#             */
/*   Updated: 2024/11/19 10:28:21 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./incl/Ice.hpp"
#include "./incl/cure.hpp"

#include "./incl/Character.hpp"
#include "./incl/MateriaSource.hpp"

int	main(void)
{

	int*	ptr = NULL;
	delete ptr;
	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("Me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	Character* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);


	AMateria*	icemat = new Ice();
	me->equip(icemat);
	me->equip(icemat);
	me->equip(icemat);
	me->equip(icemat);
	me->equip(icemat);
	me->unequip(2);
	delete icemat;
	ICharacter*	cp = new Character(*bob);
	delete cp;
	delete bob;
	delete me;
	delete src;

	return (0);
}