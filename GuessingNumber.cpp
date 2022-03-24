// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Andrew Ten-Den
// Created on: March 2022
// This program lets the user try and guess the correct number between 0 and 9

#include <iostream>

int main() {
    // this function lets the user
    // try and guess the correct number between 0 and 9
    const int SET_NUMBER = 4;
    int guessedNumber;

    // input
    std::cout << "Enter a number between 0 and 9: ";
    std::cin >> guessedNumber;
    std::cout << "" << std::endl;

    // process
    if (guessedNumber == SET_NUMBER) {
        // output
        std::cout << "You guessed correct!";
        std::cout << "\nDone." << std::endl;
    } else if (guessedNumber != SET_NUMBER) {
        // output
        std::cout << "You guessed wrong!";
        std::cout << "\nDone." << std::endl;
    }
}
