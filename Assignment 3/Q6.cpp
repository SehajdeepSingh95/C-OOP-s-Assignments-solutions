#include <iostream>
using namespace std;

class B; 

class A {
private:
    int value;
public:
    A(int v = 0) : value(v) {}
    void display() { cout << "A: " << value << endl; }
    friend int addValues(A, B);
};

class B {
private:
    int value;
public:
    B(int v = 0) : value(v) {}
    void display() { cout << "B: " << value << endl; }
    friend int addValues(A, B);
};

int addValues(A a, B b) {
    return a.value + b.value;
}

int main() {
    A a(15);
    B b(25);

    cout << "Values of objects:" << endl;
    a.display();
    b.display();

    cout << "Sum of values: " << addValues(a, b) << endl;

    return 0;
}
