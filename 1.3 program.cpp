#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    double baseSalary;

public:
    // Default constructor
    Employee() {
        name = "Not Assigned";
        id = 0;
        baseSalary = 0.0;
    }

    // Parameterized constructor
    Employee(string n, int i, double s) {
        name = n;
        id = i;
        baseSalary = s;
    }

    // Method to calculate and display total salary
    void displaySalaryDetails(double bonus) {
        double totalSalary = baseSalary + bonus;
        cout << "Employee ID: " << id << endl;
        cout << "Name       : " << name << endl;
        cout << "Base Salary: $" << baseSalary << endl;
        cout << "Bonus      : $" << bonus << endl;
        cout << "Total Salary: $" << totalSalary << endl;
        cout << "---------------------------\n";
    }
};

int main() {
    cout << "--- Using Default Constructor ---" << endl;
    Employee emp1;
    emp1.displaySalaryDetails(500.0);

    cout << "--- Using Parameterized Constructor ---" << endl;
    Employee emp2("John Doe", 101, 4500.0);
    emp2.displaySalaryDetails(1200.0);

    return 0;
}
