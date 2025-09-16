#include <iostream>
using namespace std;

class A; // Forward declaration

class B {
    int num2;
public:
    B(int n) : num2(n) {}
    friend int findMax(const A&, const B&);
};

class A {
    int num1;
public:
    A(int n) : num1(n) {}
    friend int findMax(const A&, const B&);
};

int findMax(const A& a, const B& b) {
    return (a.num1 > b.num2) ? a.num1 : b.num2;
}

int main() {
    int x, y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    A objA(x);
    B objB(y);

    cout << "Maximum: " << findMax(objA, objB) << endl;
    return 0;
} 