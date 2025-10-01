/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 09:45:21 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/01 10:55:50 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// ! Definitions of Constructor, Destructor, Member functions, and Setters, Getters
void Zombie::setName(std::string value){
    this->name = value;
}

std::string Zombie::getName(){
    return this->name;
}

Zombie::Zombie(std::string nameOfZombie){
    this->name = nameOfZombie;
}

Zombie::~Zombie(){
    std::cout << this->getName() << " is destroyed" << std::endl;
}

void Zombie::announce(){
    std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
