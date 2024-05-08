/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 21:47:28 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/08 22:56:51 by hrinka           ###   ########.fr       */
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

Animal::Animal(Animal &copy)
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

Animal &Animal::operator=(Animal const &copy)
{
	this->type = copy.type;
	std::cout << "call operator= of Animal" << std::endl;
	return *this;
}
