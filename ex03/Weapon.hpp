/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 17:18:36 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/01 15:07:06 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

//  * includes
#include <iostream>

// * Classes
class Weapon {
    // ! private
    private:
        std::string type;
    // ! public
    public:
        // * Constructor
        Weapon(std::string type);

        // * Getters and Setters
        void setType(std::string value);
        const std::string &getType();
};

#endif
