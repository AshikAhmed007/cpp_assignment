#include <iostream>
#include <vector>
#include <algorithm>

class Student {
public:
    std::string name;
    int studentId;

    Student(const std::string& name, int studentId) : name(name), studentId(studentId) {}

    friend std::ostream& operator<<(std::ostream& os, const Student& student) {
        os << "Student{name='" << student.name << "', studentId=" << student.studentId << '}';
        return os;
    }
};

int main() {
    // Create a vector of Student objects
    std::vector<Student> studentVector;

    // Add students to the vector
    studentVector.push_back(Student("Alice", 1));
    studentVector.push_back(Student("Bob", 2));
    studentVector.push_back(Student("Charlie", 3));

    // Insert a new student at a specific position
    studentVector.insert(studentVector.begin() + 1, Student("David", 4));

    // Remove a student by ID (assuming unique IDs)
    int studentIdToRemove = 2;
    studentVector.erase(std::remove_if(studentVector.begin(), studentVector.end(),
        [studentIdToRemove](const Student& student) {
            return student.studentId == studentIdToRemove;
        }), studentVector.end());

    // Reverse the order of students in the vector
    std::reverse(studentVector.begin(), studentVector.end());

    // Display the modified vector
    for (const auto& student : studentVector) {
        std::cout << student << std::endl;
    }

    return 0;
}
