/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 10:03:57 by mdahani           #+#    #+#             */
/*   Updated: 2025/09/20 10:03:57 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ! General Prototype of a Pointer to Member Function:
// ? It is a variable that stores the address of a member function in a class,
// ? allowing you to call that function on a specific object of the class.
// TODO: return_type (ClassName::*pointerName)(parameter_list);
// * return_type → the return type of the member function (void, int, etc.).
// * ClassName → the class where the member function belongs. 
// * pointerName → the name of the pointer to member function.
// * parameter_list → the function’s parameters (like int x, std::string s).

#include "Harl.hpp"

// ! Definitions of Constructor, Destructor, Member functions, and Setters, Getters

void Harl::debug(){
    std::cout << "[ DEBUG ]" << std::endl << "I love having extra bacon on my burger" << std::endl;
}

void Harl::info(){
    std::cout << "[ INFO ]" << std::endl << "Adding extra bacon costs more money." << std::endl;
}

void Harl::warning(){
    std::cout << "[ WARNING  ]" << std::endl << "I think I deserve some extra bacon for free." << std::endl
        << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(){
    std::cout << "[ ERROR ]" << std::endl << "This is unacceptable! I want to speak to the manager." << std::endl;
}

void Harl::complain(std::string level){
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    // ! Pointer to Member Function:
    void (Harl::*funcsPtr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    int start = -1;
    for (int i = 0; i < 4; i++){
        if (level == levels[i]){
            start = i;
            break;
        }
    }
    if (start == -1){
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return;
    }
    for (int i = start; i < 4; i++){
        (this->*funcsPtr[i])();
    }
}
