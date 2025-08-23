#include <iostream>
using namespace std;

int value = 100;

class Demo {
public:
    static int value;
};

int Demo::value = 200;

int main() {
    int value = 300;

    cout << "Local value: " << value << endl;
    cout << "Global value: " << ::value << endl;
    cout << "Static class member value: " << Demo::value << endl;

    return 0;
}
