/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 17:18:49 by mdahani           #+#    #+#             */
/*   Updated: 2025/09/19 17:18:49 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(){

    // * Create a file
    std::fstream MyFile("file.txt", std::ios::out);

    // * write to file 
    MyFile << "test fstream\n";

    // * Close file
    MyFile.close();
}
