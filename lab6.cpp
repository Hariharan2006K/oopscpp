#include <iostream>
using namespace std;

class Student {
    string name;
    int age;
public:
    Student(string n, int a) : name(n), age(a) {}
    // Copy constructor
    Student(const Student& s) : name(s.name), age(s.age) {
        cout << "Copy constructor called.\n";
    }
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1("Alice", 20);
    Student s2 = s1; // Copy constructor invoked

    cout << "Original Object:\n";
    s1.display();
    cout << "Copied Object:\n";
    s2.display();

    return 0;
}