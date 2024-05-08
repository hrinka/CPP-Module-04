/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 22:08:05 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/08 22:08:26 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "iostream"

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(WrongAnimal &copy);
		WrongAnimal &operator=(WrongAnimal const &copy);
		void makeSound() const;
		std::string getType() const;
};
#endif
