#include <iostream>

class Calculator {
private:
    int intResult;
    double doubleResult;

public:
    // Constructor to initialize the results
    Calculator() : intResult(0), doubleResult(0.0) {
        std::cout << "Calculator object created.\n";
    }

    // Destructor to display results and cleanup
    ~Calculator() {
        std::cout << "Product of two integers: " << intResult << std::endl;
        std::cout << "Product of two doubles: " << doubleResult << std::endl;
        std::cout << "Calculator object destroyed.\n";
    }

    // Function to compute the product of two integers
    void computeProduct(int num1, int num2) {
        intResult = num1 * num2;
    }

    // Function to compute the product of two double numbers
    void computeProduct(double num1, double num2) {
        doubleResult = num1 * num2;
    }
};

int main() {
    // Create a Calculator object
    Calculator myCalculator;

    // Compute the product of two integers
    myCalculator.computeProduct(5, 10);

    // Compute the product of two double numbers
    myCalculator.computeProduct(3.5, 2.0);

    // Destructor will be called automatically when myCalculator goes out of scope

    return 0;
}
