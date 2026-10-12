// Copyright (c) 2026 Victor V-C Name All rights reserved.
// .
// Created by: Victor Victor Calixte
// Date: 10 12, 2026
// This code will calculate the area and perimeter of a Nonagon.
// And display the result to the user.

#include <iostream>
#include <cmath>


int main() {
    // Setting the necessary  variables
    float sideLength;
    float area;
    float perimeter;

    // Introducing the user to this program.
    std::cout << "Welcome to nonagonCalculations.cpp! ";
    std::cout
    << "This program will calculate"
    << "the area and perimeter of a Nonagon!\n";

    std::cout << "Please follow the step(s) below!\n";

    // Asking the user for a side length of a nonagon.
    // Then assigning that variable to sideLength.
    std::cout << "Please enter a side length of the nonagon in cm: ";
    std::cin >> sideLength;

    // Calculating the area and perimeter
    area = (9.00 / 4.00) * (
        pow(sideLength , 2) *
        cos(M_PI / 9) / sin(M_PI / 9));

    perimeter = sideLength * 9;

    // Displaying back to the user the resulting area and perimeter.
    std::cout <<
    "The area of the Nonagon is "
    << round(area * 100.0) / 100.0
    << "cm^2\n";

    std::cout <<
    "The perimeter of the Nonagon is "

    << perimeter
    << "cm\n";

    return 0;
}
