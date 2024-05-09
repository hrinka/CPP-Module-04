/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:54:01 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/09 19:49:24 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal()
{
	this->type = "AAnimal";
	std::cout << "call constructer of AAnimal" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "call destructer of AAnimal" << std::endl;
}

AAnimal::AAnimal(AAnimal &copy)
{
	this->type = copy.type;
	std::cout << "call copy constructer of AAnimal" << std::endl;
}

// void	AAnimal::makeSound() const
// {
// 	std::cout << "print sound" << std::endl;
// }
std::string AAnimal::getType() const
{
	std::cout << "call getType from AAnimal" << std::endl;
	return this->type;
}

AAnimal &AAnimal::operator=(AAnimal const &copy)
{
	this->type = copy.type;
	std::cout << "call operator= of AAnimal" << std::endl;
	return *this;
}
