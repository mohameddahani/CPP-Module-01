/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 17:16:04 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/06 11:36:37 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av){
    if (ac != 4)
    {
        std::cout << "You must run the programe like that: [File Name] [String 1] [String 2]" << std::endl;
        return 1;
    }

    std::string fileName = av[1];
    std::string string1 = av[2];
    std::string string2 = av[3];

    // * Open the file
    std::ifstream inputFile(fileName.c_str());
    if (!inputFile.is_open()){
        std::cout << "Cannot open file!" << std::endl;
        return 1;
    }

    // * Create a file
    std::string replaceFile = fileName + ".replace";

    std::ofstream outputFile(replaceFile.c_str());
    if (!outputFile.is_open()){
        std::cout << "Cannot Create output file!" << std::endl;
        return 1;
    }

    std::string line;

    while (getline(inputFile, line)){
        line += '\n';
        size_t pos = 0;
        while ((pos = line.find(string1, pos)) != std::string::npos){
            line.erase(pos, string1.length());
            line.insert(pos, string2);
            pos += string2.length();
        }
        outputFile << line;
    }
    inputFile.close();
    outputFile.close();
}
