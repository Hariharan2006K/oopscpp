#include <iostream>
#include <string>
using namespace std;

class Manager {
    string name;
    int age;
public:
    void input() {
        cout << "Enter Manager Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore(); // Clear newline from input buffer
    }
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of managers: ";
    cin >> n;
    cin.ignore(); 

    Manager managers[100]; 

    for (int i = 0; i < n; ++i) {
        cout << "\nManager " << i + 1 << " details:\n";
        managers[i].input();
    }

    cout << "\nList of Managers:\n";
    for (int i = 0; i < n; ++i) {
        managers[i].display();}
    }