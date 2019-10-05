// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: DJ Watson
// Created on: September 2019
// this program checks if an input number is positive, negative, or 0


#include <iostream>


int main() {
    // variables
    int numinput;
    // input
    std::cout << "enter number : ";
    std::cin >> numinput;
    std::cout << "" << std::endl;
    // process
    if (numinput == 0) {
        // output
        std::cout << "this number is 0";
    } else if (numinput > 0) {
        std::cout << "this number is positive";
    } else if (numinput < 0) {
        std::cout << "this number is negative";
    }
}
