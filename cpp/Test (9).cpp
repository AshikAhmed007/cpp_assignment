#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

int main() {
    // Given strings
    std::string strings[] = {
        "It is a nice and beautiful day",
        "Time and tide wait for no man",
        "It is a small, small world"
    };

    // a) Count the number of 'a's in each string
    for (const auto& str : strings) {
        int count = std::count(str.begin(), str.end(), 'a');
        std::cout << "a) Number of 'a's in \"" << str << "\": " << count << std::endl;
    }

    // b) Replace all occurrences of 'a' with 'A'
    for (auto& str : strings) {
        std::replace(str.begin(), str.end(), 'a', 'A');
        std::cout << "b) After replacing 'a' with 'A': " << str << std::endl;
    }

    // c) Remove all embedded blanks
    for (auto& str : strings) {
        str.erase(std::remove_if(str.begin(), str.end(), ::isspace), str.end());
        std::cout << "c) After removing embedded blanks: " << str << std::endl;
    }

    // d) Right and justify each string
    for (auto& str : strings) {
        std::cout << "d) Right and justified: " << std::right << std::setw(50) << str << std::endl;
    }

    return 0;
}
