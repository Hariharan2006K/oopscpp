#include <iostream>
using namespace std;

class Employee {
    string name;
    int id;
public:
    Employee(string n, int i) : name(n), id(i) {}
    void display() const {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

int main() {
    Employee* emp = new Employee("Bob", 101);

    cout << "Dynamically Allocated Employee:\n";
    emp->display();

    delete emp; 
    return 0;
}