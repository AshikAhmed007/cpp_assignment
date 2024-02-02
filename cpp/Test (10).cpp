#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    // Define a map of countries and their capitals
    std::unordered_map<std::string, std::string> countriesAndCapitals = {
        {"USA", "Washington, D.C."},
        {"UK", "London"},
        {"France", "Paris"},
        {"Germany", "Berlin"},
        {"Canada", "Ottawa"},
        {"Japan", "Tokyo"},
        {"Brazil", "Brazilia"},
        {"Australia", "Canberra"},
        {"India", "New Delhi"},
        {"South Africa", "Pretoria"}
    };

    // Prompt user for input
    std::cout << "Enter a country or capital: ";
    std::string userInput;
    std::getline(std::cin, userInput);

    // a) Display the capital, given the country
    if (countriesAndCapitals.find(userInput) != countriesAndCapitals.end()) {
        std::cout << "Capital of " << userInput << ": " << countriesAndCapitals[userInput] << std::endl;
    }

    // b) Display the country, given the capital
    else {
        bool found = false;
        for (const auto& pair : countriesAndCapitals) {
            if (pair.second == userInput) {
                std::cout << "Country with capital " << userInput << ": " << pair.first << std::endl;
                found = true;
                break;
            }
        }

        // If not found, display a suitable message
        if (!found) {
            std::cout << "Not found in the list. Please enter a valid country or capital." << std::endl;
        }
    }

    return 0;
}
