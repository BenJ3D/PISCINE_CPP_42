/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:27:18 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/28 09:00:46 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{

	public:

		Dog( void );
		Dog( Dog const & src );
		virtual ~Dog( void );

		Dog &			operator=( Dog const & rhs );

		virtual void	makeSound( void ) const;
		void			setIdea(int index, std::string idea);
		const			std::string&	getIdea(int index) const;

	private:
		Brain	*_brain;
};

std::ostream &			operator<<( std::ostream & o, Dog const & i );

#endif /* ************************************************************* DOG_H */