/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 09:44:42 by mdahani           #+#    #+#             */
/*   Updated: 2025/09/17 09:44:43 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    int NumberOfZombies = 10;
    std::string nameOfZombie = "Foo";

    Zombie *hord = zombieHorde(NumberOfZombies, nameOfZombie);

    for (int i = 0; i < NumberOfZombies; i++){
        hord[i].announce();
    }
    
    // ! Free all Zombies
    delete[] hord;
}
