#include <iostream>
#include <string>

class Book {
private:
    std::string* title; // Dynamically allocated to demonstrate proper destructor and copy constructor usage
    double price;

public:
    // 1. Parameterized Constructor
    Book(std::string bookTitle, double bookPrice) {
        title = new std::string(bookTitle);
        price = bookPrice;
        std::cout << "[Constructor] Allocated memory and created book: " << *title << std::endl;
    }

    // 2. Copy Constructor (Performs a deep copy)
    Book(const Book& other) {
        title = new std::string(*(other.title)); // Allocates new memory for the copy
        price = other.price;
        std::cout << "[Copy Constructor] Copied data to a new memory address for: " << *title << std::endl;
    }

    // 3. Destructor
    ~Book() {
        std::cout << "[Destructor] Releasing memory allocated for: " << *title << std::endl;
        delete title; // Frees the dynamically allocated memory
    }

    // Method to display object details
    void display() const {
        std::cout << "Book Title: " << *title << " | Price: $" << price << std::endl;
    }
};

int main() {
    std::cout << "--- Creating Original Object ---" << std::endl;
    Book originalBook("C++ Essentials", 29.99);
    
    std::cout << "\n--- Displaying Original Object ---" << std::endl;
    originalBook.display();

    std::cout << "\n--- Creating Copied Object ---" << std::endl;
    Book copiedBook = originalBook; // Triggers the copy constructor

    std::cout << "\n--- Displaying Copied Object ---" << std::endl;
    copiedBook.display();

    std::cout << "\n--- Exiting Scope (Destructors are automatically invoked) ---" << std::endl;
    return 0;
}
