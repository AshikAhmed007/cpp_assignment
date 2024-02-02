#include <iostream>
#include <cmath>
#include <iomanip>

const double PI = 3.14159265358979323846;

// Function to calculate the area of a circle
double calculateArea(double radius) {
    return PI * pow(radius, 2);
}

// Function to calculate the circumference of a circle
double calculateCircumference(double radius) {
    return 2 * PI * radius;
}

int main() {
    // Array of radii
    double radii[] = {5.2, 7, 12, 7.7, 23.5};

    // Calculate and display the area and circumference for each radius
    for (int i = 0; i < sizeof(radii) / sizeof(radii[0]); ++i) {
        double radius = radii[i]; 
        double area = calculateArea(radius);
        double circumference = calculateCircumference(radius);

        // Output rounded to 4 decimal places
        std::cout << "Radius: " << radius << std::endl;
        std::cout << "Area: " << std::fixed << std::setprecision(4) << area << std::endl;
        std::cout << "Circumference: " << std::fixed << std::setprecision(4) << circumference << std::endl;
        std::cout << std::endl;
    }

    return 0;
}
