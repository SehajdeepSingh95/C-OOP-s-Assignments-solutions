#include <iostream>
using namespace std;

class B; 

class A {
private:
    int value;
public:
    A(int v = 0) : value(v) {}
    void display() { cout << "A: " << value << endl; }
    friend void swapValues(A&, B&);
};

class B {
private:
    int value;
public:
    B(int v = 0) : value(v) {}
    void display() { cout << "B: " << value << endl; }
    friend void swapValues(A&, B&);
};

void swapValues(A &a, B &b) {
    int temp = a.value;
    a.value = b.value;
    b.value = temp;
}

int main() {
    A a(5);
    B b(10);

    cout << "Before swap:" << endl;
    a.display();
    b.display();

    swapValues(a, b);

    cout << "After swap:" << endl;
    a.display();
    b.display();

    return 0;
}
