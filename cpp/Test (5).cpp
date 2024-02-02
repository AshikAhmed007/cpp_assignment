#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rollDice() {
    return rand() % 6 + 1; // Simulate rolling a six-sided die
}

int main() {
    // Seed for random number generation
    srand(static_cast<unsigned int>(time(0)));

    int correctSum = 0;
    int userGuess;
    int attempts = 0;
    const int maxAttempts = 5;

    // Simulate rolling two dice
    int die1 = rollDice();
    int die2 = rollDice();

    // Calculate the correct sum
    correctSum = die1 + die2;

    cout << "Guess the sum of two dice (between 2 and 12): ";

    do {
        // Get user's guess
        cin >> userGuess;

        // Check the guess
        if (userGuess == correctSum) {
            cout << "Good guess - Congratulations!\n";
            break;
        } else {
            cout << "Bad guess - Try again!\n";
            attempts++;

            if (attempts < maxAttempts) {
                cout << "Attempts remaining: " << maxAttempts - attempts << endl;
                cout << "Guess the sum of two dice (between 2 and 12): ";
            } else {
                cout << "Sorry! You have reached the maximum number of attempts.\n";
                cout << "The correct sum was: " << correctSum << endl;
            }
        }
    } while (attempts < maxAttempts);

    return 0;
}









