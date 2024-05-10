/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:01:11 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/10 20:24:59 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "call constructer from brain" << std::endl;
}

Brain::~Brain()
{
	std::cout << "call destructer from brain" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::copy(std::begin(copy.ideas), std::end(copy.ideas), std::begin(this->ideas));
	std::cout << "call copy constructer from Brain" << std::endl;
}

Brain &Brain::operator=(const Brain &copy)
{
	if (this != &copy)
	{
		std::copy(std::begin(copy.ideas), std::end(copy.ideas), std::begin(this->ideas));
		std::cout << "call assignment operator from Brain" << std::endl;
	}
	return *this;
}

void	Brain::setIdea(int index, std::string idea)
{
	this->ideas[index] = idea;
}

std::string &Brain::getIdea(size_t index)
{
	return this->ideas[index];
}
