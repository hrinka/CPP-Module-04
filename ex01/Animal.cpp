/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:54:01 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/10 19:36:27 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "call constructer of Animal" << std::endl;
}

Animal::~Animal()
{
	std::cout << "call destructer of Animal" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	this->type = copy.type;
	std::cout << "call copy constructer of Animal" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "print sound" << std::endl;
}

std::string Animal::getType() const
{
	std::cout << "call getType from animal" << std::endl;
	return this->type;
}

Animal &Animal::operator=(const Animal &copy)
{
	if (this != &copy)
	{
		std::cout << "call operator= of Animal" << std::endl;
		this->type = copy.type;
	}
	return *this;
}
