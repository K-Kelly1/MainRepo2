#pragma once
#pragma once

#include <cmath>
#include <iostream>
#include <string>

/**
 * @brief Get input from user
 * @return the user input as int
 */
int getPositiveIntFromUser();

/**
 * @brief Check if number is prime
 * @param number The nmber to check if prime
 * @return true if prime, else - false
 */
bool isPrime(int number);

/**
 * @brief Print array
 * @param array the array to print
 * @param arrayLen the len of the array
 */
void printArray(int* array, int arrayLen);
