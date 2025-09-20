#include <iostream>
using namespace std;

class B;

class A {
private:
    int secretNumber;

public:
    A() {
        secretNumber = 42;
    }

    friend class B;
};

class B {
public:
    void revealSecret(A obj) {
        cout << "The secret number in class A is: " << obj.secretNumber << endl;
    }
};

int main() {
    A objA;
    B objB;

    objB.revealSecret(objA);

    return 0;
}
