#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    Rectangle() : length(0), breadth(0) {}
    Rectangle(int l, int b) : length(l), breadth(b) {}
    Rectangle(int side) : length(side), breadth(side) {}

    int area() {
        return length * breadth;
    }
};

int main() {
    Rectangle rect1;
    cout << rect1.area() << endl;

    Rectangle rect2(5);
    cout << rect2.area() << endl;

    Rectangle rect3(4, 6);
    cout << rect3.area() << endl;

    return 0;
}
