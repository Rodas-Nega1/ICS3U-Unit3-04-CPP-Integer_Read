// Copyright (c) 2021 Rodas Nega All rights reserved
//
// Created by: Rodas Nega
// Created on: Sept 2021
// This program checks a user's integer value

#include <iostream>


int main() {
    int number;
    // this function checks if an integer is positive, negative, or a zero

    // input
    std::cout << "Enter your integer: ";
    std::cin >> number;
    std::cout << std::endl;

    // process & output
    if (number > 0) {
        std::cout << number << " is positive.";
    } else if (number < 0) {
        std::cout << number << " is negative.";
    } else {
        std::cout << number << " is a zero.";
    }

    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
