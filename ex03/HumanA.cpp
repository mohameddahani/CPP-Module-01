/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 17:17:46 by mdahani           #+#    #+#             */
/*   Updated: 2025/09/19 17:17:46 by mdahani          ###   ########.fr       */
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