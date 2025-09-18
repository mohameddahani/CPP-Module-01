/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 12:43:25 by marvin            #+#    #+#             */
/*   Updated: 2025/09/18 12:43:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// ! Definition of zombieHorde
Zombie* zombieHorde( int N, std::string name ){
    Zombie *hord = new Zombie[N];
    for (int i = 0; i < N; i++){
        hord[i].setName(name);
    }
    return hord;
}
