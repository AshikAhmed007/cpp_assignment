#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

const int ARRAY_SIZE = 100;

// Function to generate unique random numbers in the array
void generateRandomNumbers(int x[]) {
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        x[i] = i + 1; // Assuming unique numbers from 1 to 100
        
    }
    std::random_shuffle(x, x + ARRAY_SIZE);
}

// Function to perform binary search
int binarySearch(const int x[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (x[mid] == target) {
            return mid; // Match found, return the index
        } else if (x[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // No match found
}

int main() {
    int x[ARRAY_SIZE];

    // Seed for random number generation
    std::srand(std::time(0));

    // Generate unique random numbers
    generateRandomNumbers(x);

    // Sort the numbers in ascending order
    std::sort(x, x + ARRAY_SIZE);

    // Display the sorted array
    std::cout << "Sorted Array: ";
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        std::cout << x[i] << " ";
    }
    std::cout << "\n\n";

    // Perform binary search
    int target;
    std::cout << "Enter a number to search: ";
    std::cin >> target;

    int position = binarySearch(x, ARRAY_SIZE, target);

    // Display the result
    if (position != -1) {
        std::cout << "Match found at position: " << position + 1 << std::endl;
    } else {
        std::cout << "No match\n";
    }

    return 0;
}
