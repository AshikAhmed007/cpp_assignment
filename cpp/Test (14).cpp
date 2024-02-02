#include <iostream>
#include <vector>

int main() {
    // Input a string
    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    // Input the character to find
    char targetChar;
    std::cout << "Enter the character to find: ";
    std::cin >> targetChar;

    // Find positions of the specified character
    std::vector<int> positions;

    for (int i = 0; i < inputString.length(); ++i) {
        if (inputString[i] == targetChar) {
            positions.push_back(i + 1); // Adding 1 to display positions starting from 1
        }
    }

    // Display the result
    if (!positions.empty()) {
        std::cout << "Positions of the character '" << targetChar << "' in the string: ";
        for (int i = 0; i < positions.size(); ++i) {
            std::cout << positions[i];
            if (i < positions.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
    } else {
        std::cout << "The character '" << targetChar << "' is not found in the string.\n";
    }

    return 0;
}
