/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 17:18:29 by mdahani           #+#    #+#             */
/*   Updated: 2025/09/19 17:18:29 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// ! Definitions of Constructor, Destructor, Member functions, and Setters, Getters

void Weapon::setType(std::string value){
    this->type = value;
}
std::string Weapon::getType() const{
    return this->type;
}

Weapon::Weapon(std::string  type){
    this->setType(type);
}
