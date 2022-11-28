// Copyright (c) 2022 Marshall Demars
//
// Created by: Marshall Demars
// Created on: Nov 2022
// This program converts celsius to fahrenheit using functions

#include <iostream>

void Fahrenheit() {
    // This program converts celsius to fahrenheit using functions float Tc;
    float Tc;
    float Tf;
    std::string TcAsString;

    // Input
    std::cout << "Enter a temperature(°C): ";
    std::cin >> TcAsString;

    // Process and Output
    try {
        Tc = std::stof(TcAsString);
        Tf = (1.8) * Tc + 32;
        std::cout << Tc << "°C is equal to " << Tf << "°F." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid Input" << std::endl;
    }
}
int main() {
    // this function runs the fahrenheit function

    Fahrenheit();

    std::cout << "\nDone." << std::endl;
}
