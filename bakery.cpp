// Copyright (c) 2025 Brandon All rights reserved.
// Created By : Brandon
// Date : November 9th, 2025
// This program takes the users order,
// then determines if they pay tax, then displays the total cost.

#include <iostream>
#include <iomanip>
#include <string>

int main() {
    // declare integer to hold user order
    int itemCount;
    const float croissantPrice = 2.55;
    const float HST = 0.13;
    std::string itemCountAsString;

    std::cout << "Welcome to Brandon's Bakery!" << std::endl;
    std::cout << "How many croissants would you like to order? ";
    std::cin >> itemCountAsString;

    try {
        // convert the user's order to an int
        int itemCountAsInt = std::stoi(itemCountAsString);

        // calculate total cost, tax and subtotal
        float totalCost = itemCountAsInt * croissantPrice;
        float tax = totalCost * HST;
        float subtotal = totalCost + tax;

        // determine if the user ordered enough to not pay tax
        if (itemCountAsInt >= 6) {
            std::cout << "You have ordered more than 6 croissants, "
                      << "You don't have to pay tax! "
                      << "Your Total is: $" << std::fixed
                      << std::setprecision(2) << totalCost << std::endl;
        } else {
            std::cout << "You have ordered less than 6 croissants, "
                      << "You have to pay tax! "
                      << "Your Total is: $" << std::fixed
                      << std::setprecision(2) << subtotal << std::endl;
        }
    } catch (std::invalid_argument) {
        // The user did not enter an integer.
        std::cout <<  "Please enter a valid integer.\n";
    }
}
