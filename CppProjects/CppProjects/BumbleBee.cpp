#include "GenericFunctions.h"

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/**
 * @brief Initializes primes array of size arrayLen
 * @param primesArray the array to insert primes to
 * @param arrayLen the len of the array
 */
void initializePrimesArray(int* primesArray, unsigned int arrayLen) {
    const int SMALLER_PRIME = 2;
    unsigned int primesCounter = 0;
    int currNum = SMALLER_PRIME;
    bool foundInThisIteration = false;

    while (primesCounter < arrayLen) {
        bool isNumPrime = isPrime(currNum);

        if (isNumPrime) {
            primesArray[primesCounter] = currNum;
            primesCounter++;
        }

        currNum++;
    }
}

int main() {
    unsigned int numOfPrimesToFind = 0;

    try {
        numOfPrimesToFind = getPositiveIntFromUser();
    } catch (const std::exception& e) {
        cout << e.what() << endl;
        return 1;
    }

    int* primesArray = new int[numOfPrimesToFind];

    initializePrimesArray(primesArray, numOfPrimesToFind);
    printArray(primesArray, numOfPrimesToFind);

    delete[] primesArray;

    return 0;
}
