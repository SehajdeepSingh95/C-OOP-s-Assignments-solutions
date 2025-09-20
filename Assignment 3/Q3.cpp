#include <iostream>
using namespace std;

class Demo {
public:
    int value;

    Demo(int v = 0) {
        value = v;
        cout << "Constructor called, value = " << value << endl;
    }

    ~Demo() {
        cout << "Destructor called, value = " << value << endl;
    }
};

int main() {
    Demo d1(10);
    Demo d2;
    Demo* d3 = new Demo(20);
    delete d3;
    return 0;
}
