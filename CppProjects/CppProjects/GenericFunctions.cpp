#include "GenericFunctions.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

void printArray(int* array, int arrayLen) {
    cout << "The array: " << endl;

    for (int i = 0; i < arrayLen; i++) {
        cout << array[i] << " ";
    }

    cout << endl;
}

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    double userNumSqrt = sqrt(number);

    for (int i = 2; i <= userNumSqrt; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int getPositiveIntFromUser() {
    int userInputAsNum = 0;
    string userInput = "";
    size_t firstNotNumericIndex = 0;

    cout << "Please enter a number: ";
    cin >> userInput;

    try {
        userInputAsNum = stoi(userInput, &firstNotNumericIndex);
    } catch (...) {
        throw std::exception("Not a number! bye");
    }

    if (firstNotNumericIndex != userInput.length()) {
        throw std::exception("Not a number! bye");
    }

    if (userInputAsNum < 1) {
        throw std::exception("Not a positive number! bye");
    }

    return userInputAsNum;
}
