/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 17:17:55 by mdahani           #+#    #+#             */
/*   Updated: 2025/09/19 17:17:55 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

// * includes:
#include <iostream>
#include "Weapon.hpp"

// * Classes
class HumanA{
    // ! private
    private:
        std::string name;
        Weapon &weapon;
    public:
        // * Constructor
        HumanA(std::string name, Weapon &wp);

        // * Methodes
        void attack();

        // * Setters and Getters
        void setName(std::string value);
        std::string getName();
};

#endif