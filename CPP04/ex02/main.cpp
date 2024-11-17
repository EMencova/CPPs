/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:55:12 by emencova          #+#    #+#             */
/*   Updated: 2024/11/17 22:11:02 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
    int N = 6;
    AAnimal *animals[N];

    std::cout << std::endl << "---- Creating animals -----" << std::endl << std::endl;
    for(int i = 0; i < N; i++)
    {
        std::cout << "[ " << i << " ]" << std::endl;
        if(i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << std::endl << "---- Deleting animals -----" << std::endl << std::endl;
    for(int i = 0; i < N; i++)
    {
        std::cout << "[ " << i << " ]" << std::endl;
        delete animals[i];
    }
}

	/*

	const AAnimal* ani = new AAnimal();
	const AAnimal* anidog = new Dog();
	const AAnimal* anicat = new Cat();
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
	delete wcat;
}*/