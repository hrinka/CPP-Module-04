/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 21:51:13 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/09 19:09:01 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* attribute;
	public:
		Dog();
		~Dog();
		Dog(Dog &copy);
		Dog &operator=(Dog &copy);
		void makeSound() const;
		std::string getType() const;
};
#endif
