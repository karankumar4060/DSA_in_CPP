#include <iostream>
using namespace std;

// Class definition
class Student {               // not necessary that the first letter of class is capital but it recommand to use capital letter
private:                       // if we not declare then by default it is private
    string name;  // private property

public:
    float cgpa;

    // Setter method for name
    void setName(string n) {
        name = n;
    }

    // Getter method for name
    string getName() {
        return name;
    }

    // Method to calculate percentage
    void percentage() {
        cout << (cgpa * 10) << "%" << endl;
    }
};

int main() {
    Student s1;

    // Use setter to set the name
    s1.setName("Karan");

    // Use getter to get and print the name
    cout << "Name: " << s1.getName() << endl;

    // Set and print CGPA
    s1.cgpa = 9.0;
    cout << "CGPA: " << s1.cgpa << endl;

    // Calculate and print percentage
    s1.percentage();

    return 0;
}
