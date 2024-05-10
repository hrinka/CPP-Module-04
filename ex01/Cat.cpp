/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 21:49:57 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/10 20:21:10 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	this->attribute = new Brain();
	std::cout << "call constructer form class Cat" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	this->type = copy.type;
	this->attribute = new Brain();
	*(this->attribute) = *(copy.attribute);
	std::cout << "call copy constructer from cat" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	if (this != &copy)
	{
		std::cout << "call operator from cat" << std::endl;
		Brain *newBrain = new Brain();
		*newBrain = *(copy.attribute);
		delete this->attribute;
		this->attribute = newBrain;
		this->type = copy.type;
	}
	return *this;
}

Cat::~Cat()
{
	delete this->attribute;
	std::cout << "call destructer from claas Cat" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "cat : Miaaaaaaaao" << std::endl;
}

std::string Cat::getType() const
{
	std::cout << "call getType from Cat" << std::endl;
	return this->type;
}

void Cat::setIdea(int index, std::string idea)
{
	attribute->setIdea(index, idea);
}

std::string &Cat::getIdea(size_t index)
{
	return attribute->getIdea(index);
}
