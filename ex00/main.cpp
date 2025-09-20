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

int main(int ac, char **av){
    if (ac != 1)
    {
        std::cout << "Run only the programe [zombie]" << std::endl;
        return 1;
    }
    (void)av;

    randomChump("Foo");
    Zombie *z = newZombie("allocate zombie");
    z->announce();
    delete z;
}
