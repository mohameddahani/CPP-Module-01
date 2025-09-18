/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 09:45:02 by mdahani           #+#    #+#             */
/*   Updated: 2025/09/17 10:40:48 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

// * Includes
#include <iostream>



// *Calsses
class Zombie {
    // ! private
    private:
        std::string name;
    
    // ! public
    public:
        // * Default Constructor
        Zombie();

        // * Constructor
        Zombie(std::string nameOfZombie);

        // * Destructor
        ~Zombie();

        // * Member functions
        void announce();

        // * Setters, Getters
        void setName(std::string value);
        std::string getName();
};

Zombie* zombieHorde( int N, std::string name );

#endif

