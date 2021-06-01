// Copyright (c) 2021 Felipe Affonso All rights reserved
//
// Created by: Felipe Affonso
// Created on: May 2021
// This program generate random numbers and shows their average

#include <iostream>
#include <cmath>
#include <iomanip>
#include <random>

int main() {
    // This function generate random numbers and shows their average
    int number_of_random_numbers;
    number_of_random_numbers = 10;

    float average;
    average = 0;

    int numbers[number_of_random_numbers];

    std::cout << number_of_random_numbers << " random numbers:" << std::endl;

    for (int random_number = 0; random_number < 10; random_number ++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(0, 100);
        numbers[random_number] = idist(rgen);
        std::cout << numbers[random_number] << std::endl;
        average = average + numbers[random_number];
    }

    average = average / number_of_random_numbers;

    std::cout << "\nAverage:" << average << std::endl;

    std::cout << "\nDone." << std::endl;
}
