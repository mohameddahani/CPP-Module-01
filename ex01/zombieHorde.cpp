/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 17:17:18 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/01 14:20:31 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// ! Definition of zombieHorde
Zombie* zombieHorde( int N, std::string name ){
    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; i++){
        horde[i].setName(name);
    }
    return horde;
}
