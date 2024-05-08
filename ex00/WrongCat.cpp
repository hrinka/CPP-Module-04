/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 22:10:46 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/08 22:12:42 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "call constructer form class WrongCat" << std::endl;
}
WrongCat::WrongCat(WrongCat &copy)
{
	this->type = copy.type;
	std::cout << "call copy constructer from WrongCat" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat &copy)
{
	std::cout << "call operator from WrongCat" << std::endl;
	this->type = copy.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "call destructer from claas WrongCat" << std::endl;
}
void WrongCat::makeSound() const
{
	std::cout << "WrongCat miaaaaaaaao" << std::endl;
}

std::string WrongCat::getType() const
{
	std::cout << "call getType from WrongCat" << std::endl;
	return this->type;
}
