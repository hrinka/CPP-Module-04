/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 21:51:31 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/10 19:51:27 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "call constructer of dog" << std::endl;
}

Dog::~Dog()
{
	std::cout << "call destructer from dog" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "call copy constructer dog" << std::endl;
	this->type = copy.type;
}

void Dog::makeSound() const
{
	std::cout << "dog : Woof Woof" << std::endl;
}

std::string Dog::getType() const
{
	std::cout << "call get type from dog" << std::endl;
	return this->type;
}

Dog &Dog::operator=(const Dog &copy)
{
	if (this != &copy)
	{
		std::cout << "call operator from dog" << std::endl;
		this->type = copy.type;
	}
	return *this;
}
