#include<iostream>
using namespace std;

class MyClass {
    static int count; 
public:
    MyClass() { count++; } 

    static void showcount() { 
        cout << "Number of objects created: " << count << endl;
    }
};


int MyClass::count = 0;

int main() {
    MyClass a, b, c;
    MyClass::showcount(); 

    MyClass d;
    MyClass::showcount(); 

    return 0;
}