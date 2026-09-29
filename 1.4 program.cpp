#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int empID;
    double baseSalary;
    double bonus;

public:
    // Default Constructor
    Employee() {
        name = "Unknown";
        empID = 0;
        baseSalary = 0.0;
        bonus = 0.0;
    }

    // Parameterized Constructor
    Employee(string n, int id, double salary, double b) {
        name = n;
        empID = id;
        baseSalary = salary;
        bonus = b;
    }

    // Function to calculate total salary
    double calculateTotalSalary() {
        return baseSalary + bonus;
    }

    // Function to display employee details
    void displayDetails() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "ID: " << empID << endl;
        cout << "Name: " << name << endl;
        cout << "Base Salary: $" << baseSalary << endl;
        cout << "Bonus: $" << bonus << endl;
        cout << "Total Salary: $" << calculateTotalSalary() << endl;
    }
};

int main() {
    // 1. Using the Default Constructor
    cout << "Creating employee1 using default constructor..." << endl;
    Employee emp1;
    emp1.displayDetails();

    // 2. Using the Parameterized Constructor
    cout << "\nCreating employee2 using parameterized constructor..." << endl;
    Employee emp2("John Doe", 101, 50000.0, 4500.0);
    emp2.displayDetails();

    return 0;
}
