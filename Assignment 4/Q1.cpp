#include <iostream>
using namespace std;

class Base {
public:
    int pub = 1;
protected:
    int prot = 2;
private:
    int priv = 3;
};

class DerivedPublic : public Base {
public:
    void show() {
        cout << "DerivedPublic can access pub = " << pub << endl;
        cout << "DerivedPublic can access prot = " << prot << endl;
    }
};

class DerivedProtected : protected Base {
public:
    void show() {
        cout << "DerivedProtected can access pub (now protected) = " << pub << endl;
        cout << "DerivedProtected can access prot = " << prot << endl;
    }
};

class DerivedPrivate : private Base {
public:
    void show() {
        cout << "DerivedPrivate can access pub (now private) = " << pub << endl;
        cout << "DerivedPrivate can access prot (now private) = " << prot << endl;
    }
};

int main() {
    DerivedPublic d1;
    d1.show();
    cout << "Accessing from main: d1.pub = " << d1.pub << endl;
    cout << "-------------------------------" << endl;

    DerivedProtected d2;
    d2.show();

    cout << "-------------------------------" << endl;

    DerivedPrivate d3;
    d3.show();

    return 0;
}