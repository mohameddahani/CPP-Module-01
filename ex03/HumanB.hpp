/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 15:32:14 by marvin            #+#    #+#             */
/*   Updated: 2025/09/19 15:32:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

// * includes:
#include <iostream>
#include "Weapon.hpp"

// * Classes
class HumanB{
    // ! private
    private:
        std::string name;
        Weapon *weapon;
    public:
        // * Constructor
        HumanB(std::string name);

        // * Methodes
        void attack();

        // * Setters and Getters
        void setName(std::string value);
        std::string getName();

        void setWeapon(Weapon &wp);
};

#endif