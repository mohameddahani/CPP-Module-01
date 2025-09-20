/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 10:02:55 by mdahani           #+#    #+#             */
/*   Updated: 2025/09/20 10:02:55 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av){
    if (ac != 2)
    {
        std::cout << "You must run the programe [harl] With [DEBUG] or [INFO] or [WARNING] OR [ERROR]" << std::endl;
        return 1;
    }
    
    Harl msg;
    msg.complain(av[1]);
}