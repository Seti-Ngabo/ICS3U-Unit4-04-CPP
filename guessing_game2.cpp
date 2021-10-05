// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Seti Ngabo
// Created on: Sept 2021
// This program uses while loop

#include <iostream>
#include <random>

int main() {
    // this function uses while loop
    int random_guess_as_integer;
    std::string random_guess;
    int the_number;

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    // mersence_twister
    std::uniform_int_distribution<int> idist(0, 10);
    // [0, 10]
    the_number = idist(rgen);

    // input
    while (true) {
        std::cout << "Enter a random number between 0 and 10(integer): ";
        std::cin >> random_guess;
        std::cout << "" << std::endl;

        try {
            random_guess_as_integer = std::stoi(random_guess);
            if (random_guess_as_integer == the_number) {
                std::cout << "Correct, good guesser." << std::endl;
                std::cout << "\nDone." << std::endl;
                break;
            } else if (random_guess_as_integer > the_number) {
                std::cout << "The number is too high, try again." << std::endl;
            } else {
                std::cout << "The number is too low, try again." << std::endl;
            }
        }
        catch (std::invalid_argument) {
        std::cout << random_guess << " is an invalid input, try again."
                    << std::endl;
        }
    std::cout << "\nDone." << std::endl;
    }
}
