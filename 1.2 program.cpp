#include <iostream>
#include <string>

class Student {
private:
    int rollNumber;
    std::string name;
    float marks;

public:
    // Function to accept student details
    void acceptDetails() {
        std::cout << "Enter Roll Number: ";
        std::cin >> rollNumber;
        std::cin.ignore(); // Clear the input buffer
        std::cout << "Enter Name: ";
        std::getline(std::cin, name);
        std::cout << "Enter Marks (out of 100): ";
        std::cin >> marks;
    }

    // Function to calculate and display the result
    void displayResult() {
        std::cout << "\n--- Student Details ---" << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Marks: " << marks << std::endl;
        
        // Calculate result status based on passing marks (e.g., 40)
        std::cout << "Result: ";
        if (marks >= 40.0) {
            std::cout << "PASSED" << std::endl;
        } else {
            std::cout << "FAILED" << std::endl;
        }
    }
};

int main() {
    Student s;
    s.acceptDetails();
    s.displayResult();
    return 0;
}
