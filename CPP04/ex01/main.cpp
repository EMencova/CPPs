/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:55:12 by emencova          #+#    #+#             */
/*   Updated: 2024/11/17 21:41:59 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{

	const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    delete dog;
    delete cat;

    const Animal* animals[4] = { new Dog(), new Dog(),new Cat(), new Cat()};
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }
	/*
	const Animal* ani = new Animal();
	const Animal* anidog = new Dog();
	const Animal* anicat = new Cat();
    std::cout << "ani Type: " << ani->getType() << " Animal " << std::endl;
    std::cout << "anidog Type: " << anidog->getType() << " Dog " << std::endl;
    std::cout << "anicat Type: " << anicat->getType() << " Cat " << std::endl;
	anidog->makeSound();
	anicat->makeSound();
	ani->makeSound();
	const WrongAnimal* wani = new WrongAnimal();
	const WrongAnimal* wcat = new WrongCat();
    std::cout << "wani Type: " << wani->getType() << " Wrong Animal " << std::endl;
    std::cout << "wcat Type: " << wcat->getType() << " Wrong Cat " << std::endl;
	wani->makeSound();
	wcat->makeSound();
	delete ani;
	delete anidog;
	delete anicat;
    delete wani;
	delete wcat;*/
}