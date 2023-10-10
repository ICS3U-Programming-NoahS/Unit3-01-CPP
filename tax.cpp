// Copyright (c) 2023 Noah Smith All rights reserved.
//
// Created by: Noah Smith
// Date: Oct. 10th, 2023
// This program asks the user for the subtotal ($).
// It then calculates and displays
// the total and the tax.
#include <iomanip>
#include <iostream>

int main() {
    // Declare constants
    const float hst = 0.15;

    // Declare variables
    float subtotal, tax, total;

    // Get the diameter
    std::cout << "Enter the subtotal ($): ";
    std::cin >> subtotal;

    // Calculate the total and the tax
    tax = hst * subtotal;
    total = subtotal + tax;

    // Display the total and the tax back to the user
    std::cout << "";
    std::cout << "The total  is: $"
              << std::fixed << std::setprecision(2)
              << std::setfill('0') << total << std::endl;
    std::cout << "The tax  is: $"
              << std::fixed << std::setprecision(2)
              << std::setfill('0') << tax << std::endl;
}
