#include <iostream>
#include <vector>
#include <algorithm>

struct ClubMember {
    std::string name;
    std::string areaCode;
    std::string phoneNumber;
};

int main() {
    // Create a vector to store club members
    std::vector<ClubMember> members;

    // Input values for club members
    int numberOfMembers;
    std::cout << "Enter the number of club members: ";
    std::cin >> numberOfMembers;

    for (int i = 0; i < numberOfMembers; ++i) {
        ClubMember member;
        std::cout << "\nEnter details for member " << i + 1 << ":\n";
        std::cout << "Name: ";
        std::cin.ignore();  // Clear the newline character from the buffer
        std::getline(std::cin, member.name);
        std::cout << "Area Code: ";
        std::cin >> member.areaCode;
        std::cout << "Phone Number: ";
        std::cin >> member.phoneNumber;
        members.push_back(member);
    }

    // Sort members based on area code
    std::sort(members.begin(), members.end(), [](const ClubMember& a, const ClubMember& b) {
        return a.areaCode < b.areaCode;
    });

    // Display members according to their area code
    std::cout << "\nClub Members Sorted by Area Code:\n";
    for (const auto& member : members) {
        std::cout << "Name: " << member.name << "\tArea Code: " << member.areaCode
                  << "\tPhone Number: " << member.phoneNumber << std::endl;
    }

    return 0;
}
