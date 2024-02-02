#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int totalNumbers = 200;
    const int lowerBound = 1000;
    const int upperBound = 9999;

    // Seed for random number generation
    srand(static_cast<unsigned int>(time(0)));

    // Variables to store counts
    int countRange1 = 0, countRange2 = 0, countRange3 = 0, countRange4 = 0;
    int countEven = 0, countDivisibleBy5 = 0;

    // Generate and analyze random numbers
    for (int i = 0; i < totalNumbers; ++i) {
        int randomNumber = rand() % (upperBound - lowerBound + 1) + lowerBound;

        // Check which range the number falls into
        if (randomNumber >= 1000 && randomNumber <= 2499) {
            countRange1++;
        } else if (randomNumber >= 2500 && randomNumber <= 4999) {
            countRange2++;
        } else if (randomNumber >= 5000 && randomNumber <= 7499) {
            countRange3++;
        } else if (randomNumber >= 7500 && randomNumber <= 9999) {
            countRange4++;
        }

        // Check if the number is even
        if (randomNumber % 2 == 0) {
            countEven++;
        }

        // Check if the number is divisible by 5
        if (randomNumber % 5 == 0) {
            countDivisibleBy5++;
        }
    }

    // Display results
    cout << "Counts in specified ranges:\n";
    cout << "1000-2499: " << countRange1 << " numbers\n";
    cout << "2500-4999: " << countRange2 << " numbers\n";
    cout << "5000-7499: " << countRange3 << " numbers\n";
    cout << "7500-9999: " << countRange4 << " numbers\n";

    cout << "\nCounts for even and divisible by 5:\n";
    cout << "Even numbers: " << countEven << " numbers\n";
    cout << "Divisible by 5: " << countDivisibleBy5 << " numbers\n";

    return 0;
}
