#include <iostream>
#include <fstream>

using namespace std;

int main() {
    const int n = 15;

    // Sample data
    const string names[] = {"Ahmad", "Sarah", "John", "Alice", "Michael", "Susan", "David", "Emily", "Robert", "Linda", "Daniel", "Sophia", "Christopher", "Ella", "Matthew"};
    const char genders[] = {'M', 'F', 'M', 'F', 'M', 'F', 'M', 'F', 'M', 'F', 'M', 'F', 'M', 'F', 'M'};
    const int ages[] = {20, 25, 30, 22, 28, 35, 32, 26, 29, 40, 23, 31, 27, 33, 36};
    const long telephones[] = {1234567, 9876543, 6543210, 4567890, 2345678, 8765432, 3456789, 7890123, 2109876, 4321098, 1098765, 5432109, 8901234, 3210987, 6789012};
    const string emails[] = {"aaa@must.edu.my", "sarah@example.com", "john@example.com", "alice@example.com", "michael@example.com", "susan@example.com", "david@example.com", "emily@example.com", "robert@example.com", "linda@example.com", "daniel@example.com", "sophia@example.com", "christopher@example.com", "ella@example.com", "matthew@example.com"};

    // Open file for writing
    ofstream outputFile("contacts.txt");

    // Check if the file is opened successfully
    if (!outputFile.is_open()) {
        cerr << "Error opening the file." << endl;
        return 1;  // Return error code
    }

    // Write data to the file
    for (int i = 0; i < n; ++i) {
        outputFile << '"' << names[i] << "\", \"" << genders[i] << "\", " << ages[i] << ", " << telephones[i] << ", \"" << emails[i] << "\"\n";
    }

    // Close the file
    outputFile.close();

    cout << "Data written to contacts.txt successfully." << endl;

    return 0;
}
