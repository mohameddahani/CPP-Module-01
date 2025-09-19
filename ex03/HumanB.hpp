/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 17:18:13 by mdahani           #+#    #+#             */
/*   Updated: 2025/09/19 17:18:13 by mdahani          ###   ########.fr       */
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