/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 15:32:03 by marvin            #+#    #+#             */
/*   Updated: 2025/09/19 15:32:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

// ! Definitions of Constructor, Destructor, Member functions, and Setters, Getters
void HumanB::setName(std::string value){
    this->name = value;
}

std::string HumanB::getName(){
    return this->name;
}

HumanB::HumanB(std::string name){
        this->setName(name);
}

void HumanB::setWeapon(Weapon &wp){
        this->weapon = &wp;
}

void HumanB::attack(){
    if (this->weapon){
        std::cout << this->getName() << " attacks with their " << this->weapon->getType() << std::endl;
    }
    else {
        std::cout << this->getName() << " has no weapon to attack with!" << std::endl;
    }
}