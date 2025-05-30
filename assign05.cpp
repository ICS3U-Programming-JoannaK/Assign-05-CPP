// Copyright 2025 Joanna Keza All rights reserved
//
// Created by: Joanna Keza
// Data: May 21, 2025
// This program takes a time in seconds
// and converts it into hours, minutes, and
// remaining seconds.

#include <iostream>

// function that converts seconds into hours, minutes and remaining seconds
int convertTime(const int playerTimes[], int convertedTimes[][3]) {
    // initialising the valid converted times
    int count = 0;
    // This loop goes through all 3 players
    for (int counter = 0; counter < 3; counter++) {
        int time = static_cast<int>(playerTimes[counter]);
        // calculate and store hours, minutes and remaining seconds
        // hours
        convertedTimes[count][0] = time / 3600;
        // minutes
        convertedTimes[count][1] = (time % 3600) / 60;
        // remaining seconds
        convertedTimes[count][2] = time % 60;
        // increments the number of converted times
        count++;
    }
    // returns how many times were converted
    return count;
}

int main() {
    // displays the greeting card
        std::cout
            << "************************************" << std::endl;
        std::cout << "************************************" << std::endl;
        std::cout << "*            Hello user !          *" << std::endl;
        std::cout << "************************************" << std::endl;
        std::cout << "************************************\n"
                  << std::endl;
        std::cout << "\n"
                  << std::endl;

        const int playerCount = 3;

        // declaring variables
        int playerTimes[playerCount];

        // loop to input each player's time
        for (int counter = 0; counter < playerCount; counter++) {
            // this loop makes sure the user's input is valid
            while (true) {
                std::cout << "Enter the player's time in seconds:";
                std::cin >> playerTimes[counter];
// makes sure the user's input is higher than 0, seconds cant be negative
                if (playerTimes[counter] < 0) {
                    std::cout << "Not valid input. Seconds cannot be negative" << std::endl;
                    // if the input is valid, it breaks out of the loop
                } else {
                }
                break;
            }
        }
// Declaring an array to hold converted time values (hours, minutes, seconds)
int convertedTimes[playerCount][3];
        // converts all entered times and the number of valid conversions
int count = convertTime(playerTimes, convertedTimes);

        // prints out the converted time for each player
        for (int counter = 0; counter < count; counter++) {
            std::cout << "Player "
                      << (counter + 1) << " ran "
        << convertedTimes[counter][0] << " hours, "
        << convertedTimes[counter][1] << " minutes, "
        << convertedTimes[counter][2] << " remaining seconds." << std::endl;
        }
}
