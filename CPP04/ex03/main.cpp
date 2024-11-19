/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:43:25 by emencova          #+#    #+#             */
/*   Updated: 2024/11/19 13:13:04 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./incl/Ice.hpp"
#include "./incl/Cure.hpp"

#include "./incl/Character.hpp"
#include "./incl/MateriaSource.hpp"


int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}


/*
int	main(void)
{	
	MateriaSource* src = new MateriaSource();
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
}*/