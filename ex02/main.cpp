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

#include <iostream>

int main(int ac, char **av){
    if (ac != 1)
    {
        std::cout << "Run only the programe [references]" << std::endl;
        return 1;
    }
    (void)av;

    std::string str = "HI THIS IS BRAIN";

    // * A pointer to the string.
    std::string *stringPTR = &str;
    // * A reference to the string.
    std::string &stringREF = str;

    // * Print The memory address of variables
    std::cout << "The memory address of the string variable: " << &str << std::endl;
    std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;

    // * Print The Values of variables
    std::cout << "The value of the string variable: " << str << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
}
