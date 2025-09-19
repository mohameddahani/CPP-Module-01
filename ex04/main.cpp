/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 17:16:04 by mdahani           #+#    #+#             */
/*   Updated: 2025/09/19 17:16:04 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av){
    if (ac != 4)
    {
        std::cout << "You must run the programe like that: [File Name] [String 1] [String 2]" << std::endl;
        return 1;
    }
}