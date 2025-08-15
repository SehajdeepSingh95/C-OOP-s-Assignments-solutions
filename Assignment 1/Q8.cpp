#include <iostream>
using namespace std;
namespace Section1 {
    int value = 10;

    void display() {
        cout << "Section1 value: " << value << endl;
    }
}
namespace Section2 {
    int value = 20;

    void display() {
        cout << "Section2 value: " << value << endl;
    }
}

int main() {
    int value = 5;
    cout << "Main function value: " << value << endl;
    Section1::display();
    cout << "Accessing Section1 variable directly: " << Section1::value << endl;
    Section2::display();
    cout << "Accessing Section2 variable directly: " << Section2::value << endl;

    return 0;
}
