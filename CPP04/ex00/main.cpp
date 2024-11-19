/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:55:12 by emencova          #+#    #+#             */
/*   Updated: 2024/11/19 23:04:09 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* ani = new Animal();
	const Animal* anidog = new Dog();
	const Animal* anicat = new Cat();
    std::cout << "ani Type: " << ani->getType() << std::endl;
    std::cout << "anidog Type: " << anidog->getType() << std::endl;
    std::cout << "anicat Type: " << anicat->getType() << std::endl;
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
	delete wcat;
}