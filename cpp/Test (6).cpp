#include <iostream>
#include <fstream>
#include <string>
#include <cctype> 

using namespace std;

const int n = 12;

void readCountriesAndCapitals(string country[], string capital[]) {
    ifstream inputFile("countries.txt");

    if (!inputFile.is_open()) {
        cerr << "Error opening the file." << endl;
        exit(1);
    }

    for (int i = 0; i < n; ++i) {
        getline(inputFile, country[i], ',');
        getline(inputFile, capital[i]);
    }

    inputFile.close();
}

int main() {
    string country[n];
    string capital[n];

    // Read countries and capitals from the file
    readCountriesAndCapitals(country, capital);

    // Get user input
    cout << "Enter a country name: ";
    string userCountry;
    getline(cin, userCountry);
    userCountry[0]=toupper(userCountry[0]);
    // Search for the entered country in the array
    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (userCountry == country[i]) {
            cout << "The capital of " << country[i] << " is " << capital[i] << "." << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "The country name is not in the list." << endl;
    }

    return 0;
}
