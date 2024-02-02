#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

// Function to calculate salary based on hours worked
double calculateSalary(int hours, double rate) {
    if (hours <= 40) {
        return hours * rate;
    } else if (hours > 40 && hours <= 60) {
        return 300 + (hours - 40) * rate * 1.5;
    } else {
        return 525 + (hours - 60) * rate * 2.0;
    }
}

int main() {
    const int n = 20;  // Number of staff
    const double hourlyRate = 9.50;

    vector<int> hoursWorked = {35,45,55,40,60,75,55,45,60,82,52,92,95,35,77,69,56,90,44,64};

    // Display header
    cout << "FACTORY SALARY REPORT\n\n";
    cout << setw(5) << "No." << setw(15) << "Hours Worked" << setw(15) << "Hourly Rate" << setw(15) << "Salary\n";

    // Display staff details and calculate salaries
    for (int i = 0; i < n; ++i) {
        double salary = calculateSalary(hoursWorked[i], hourlyRate);

        // Display staff details
        cout << setw(5) << i + 1 << setw(15) << hoursWorked[i] << setw(15) << hourlyRate << setw(15) << setprecision(2) << fixed << salary << endl;
    }

    return 0;
}
