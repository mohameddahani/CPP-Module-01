/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 15:31:31 by marvin            #+#    #+#             */
/*   Updated: 2025/09/19 15:31:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

// ! Definitions of Constructor, Destructor, Member functions, and Setters, Getters

void HumanA::setName(std::string value){
    this->name = value;
}

std::string HumanA::getName(){
    return this->name;
}

HumanA::HumanA(std::string name, Weapon &wp)
    : weapon(wp) {
        this->setName(name);
    }

void HumanA::attack(){
    std::cout << this->getName() << " attacks with their " << this->weapon.getType() << std::endl;
}