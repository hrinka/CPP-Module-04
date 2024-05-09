/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 21:49:57 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/09 22:04:16 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	this->type = "Cat";
	this->attribute = new Brain();
	std::cout << "call constructer form class Cat" << std::endl;
}
Cat::Cat(Cat &copy)
{
	this->type = copy.type;
	this->attribute = new Brain();
	*(this->attribute) = *(copy.attribute);
	std::cout << "call copy constructer from cat" << std::endl;
}

Cat &Cat::operator=(Cat &copy)
{
	std::cout << "call operator from cat" << std::endl;
	this->type = copy.type;
	this->attribute = new Brain();
	*(this->attribute) = *(copy.attribute);
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
