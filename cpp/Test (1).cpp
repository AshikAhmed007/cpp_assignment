#include<bits/stdc++.h>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

// Function to calculate grade based on marks
char calculateGrade(int marks) {
    if (marks >= 80 && marks <= 100) {
        return 'A';
    } else if (marks >= 65 && marks <= 79) {
        return 'B';
    } else if (marks >= 50 && marks <= 64) {
        return 'C';
    } else {
        return 'F';
    }
}

int main() {
    const int n = 10;  // Number of students
    vector<string> names = {"AAA", "BBB", "CCC", "DDD", "EEE", "FFF", "GGG", "HHH", "III", "JJJ"};
    vector<int> marks = {88, 45, 50,64,80,90,66,44,52,70};

    // Display header
    cout << "EXAMINATION REPORT\n\n";
    cout << "INTRODUCTION TO C++ PROGRAMMING\n\n";
    cout << setw(5) << "No." << setw(20) << "Student name" << setw(10) << "Mark" << setw(10) << "Grade\n";

    // Display student details and calculate statistics
    int sum = 0;
    int lowestMark=INT_MAX;
    int highestMark=INT_MIN ;
    int countA = 0, countB = 0, countC = 0, countF = 0;

    for (int i = 0; i < n; ++i) {
        char grade = calculateGrade(marks[i]);

        // Update statistics
        sum += marks[i];
        lowestMark = min(lowestMark, marks[i]);
        highestMark = max(highestMark, marks[i]);

        switch (grade) {
            case 'A':
                countA++;
                break;
            case 'B':
                countB++;
                break;
            case 'C':
                countC++;
                break;
            case 'F':
                countF++;
                break;
        }

        // Display student details
        cout << setw(5) << i + 1 << setw(20) << names[i] << setw(10) << marks[i] << setw(5) << grade << endl;
    }

    // Calculate and display average
    double average = static_cast<double>(sum) / n;
    cout << "\nAverage mark = " << setprecision(2) << fixed << average << endl;

    // Display lowest and highest marks
    cout << "Lowest mark = " << lowestMark << endl;
    cout << "Highest mark = " << highestMark << endl;

    // Display grade statistics
    cout << "No. of A = " << countA << endl;
    cout << "No. of B = " << countB << endl;
    cout << "No. of C = " << countC << endl;
    cout << "No. of F = " << countF << endl;

    return 0;
}
