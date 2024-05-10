/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 21:51:31 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/10 20:24:26 by hrinka           ###   ########.fr       */
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

Dog::Dog(const Dog &copy)
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

Dog &Dog::operator=(const Dog &copy)
{
	if (this != &copy)
	{
		std::cout << "call operator from dog" << std::endl;
		Brain *newBrain = new Brain();
		*newBrain = *(copy.attribute);
		delete this->attribute;
		this->attribute = newBrain;
		this->type = copy.type;
	}
	return *this;
}

void Dog::setIdea(int index, std::string idea)
{
	attribute->setIdea(index, idea);
}

std::string &Dog::getIdea(size_t index)
{
	return attribute->getIdea(index);
}
