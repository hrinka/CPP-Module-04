/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 22:10:02 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/08 22:10:42 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "call constructer of WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "call destructer of WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
	this->type = copy.type;
	std::cout << "call copy constructer of WrongAnimal" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "print sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	std::cout << "call getType from WrongAnimal" << std::endl;
	return this->type;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &copy)
{
	this->type = copy.type;
	std::cout << "call operator= of WrongAnimal" << std::endl;
	return *this;
}
