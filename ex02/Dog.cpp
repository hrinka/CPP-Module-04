/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 21:51:31 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/09 22:04:33 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->attribute = new Brain();
	std::cout << "call constructer of dog" << std::endl;
}

Dog::~Dog()
{
	delete this->attribute;
	std::cout << "call destructer from dog" << std::endl;
}

Dog::Dog(Dog &copy)
{
	this->type = copy.type;
	this->attribute = new Brain();
	*(this->attribute) = *(copy.attribute);
	std::cout << "call copy constructer dog" << std::endl;
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

Dog &Dog::operator=(Dog &copy)
{
	std::cout << "call operator from dog" << std::endl;
	this->type = copy.type;
	this->attribute = new Brain();
	*(this->attribute) = *(copy.attribute);
	return *this;
}
