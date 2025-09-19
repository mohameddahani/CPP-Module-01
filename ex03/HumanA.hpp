/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 15:31:41 by marvin            #+#    #+#             */
/*   Updated: 2025/09/19 15:31:41 by marvin           ###   ########.fr       */
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