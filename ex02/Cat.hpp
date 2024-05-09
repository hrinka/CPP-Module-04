/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 21:50:10 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/09 20:03:53 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain* attribute;
	public:
		Cat();
		~Cat();
		Cat(Cat &copy);
		Cat &operator=(Cat &copy);
		void makeSound() const;
		std::string getType() const;
};

#endif
