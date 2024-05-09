/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:02:33 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/09 20:05:38 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	AAnimal* AAnimals[4];
	AAnimals[0] = new Dog();
	AAnimals[1] = new Dog();
	AAnimals[2] = new Cat();
	AAnimals[3] = new Cat();
	int count = 0;
	while (count < 4)
	{
		delete AAnimals[count];
		count++;
	}

	delete i;
	delete j;//should not create a leak

	return 0;
}
