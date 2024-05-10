/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 21:49:57 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/10 19:51:11 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "call constructer form class Cat" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "call copy constructer from cat" << std::endl;
	this->type = copy.type;
}

Cat &Cat::operator=(const Cat &copy)
{
	if (this != &copy)
	{
		std::cout << "call operator from cat" << std::endl;
		this->type = copy.type;
	}
	return *this;
}

Cat::~Cat()
{
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
