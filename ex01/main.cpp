/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:02:33 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/10 19:53:21 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	Animal* animals[4];
	animals[0] = new Dog();
	animals[1] = new Dog();
	animals[2] = new Cat();
	animals[3] = new Cat();
	int count = 0;
	while (count < 4)
	{
		delete animals[count];
		count++;
	}

	Cat cat;
	cat.setIdea(0, "idea1");
	cat.setIdea(1, "idea2");

	std::cout << "cat idea" << cat.getIdea(0) << std::endl;
	std::cout << "cat idea" << cat.getIdea(0) << std::endl;

	Cat cat2;
	cat2 = cat;
	cat.setIdea(0, "IDEA1");
	cat.setIdea(1, "IDEA2");
	std::cout << "cat idea" << cat2.getIdea(0) << std::endl;
	std::cout << "cat idea" << cat2.getIdea(1) << std::endl;

	delete i;
	delete j;//should not create a leak

	return 0;
}

// __attribute__((destructor))
// static void destructor() {
// 	system("leaks -q Animal");
// }
