#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    Rectangle(int l = 0, int b = 0) {
        length = l;
        breadth = b;
    }

    void setLength(int l) {
        this->length = l;
    }

    void setBreadth(int b) {
        this->breadth = b;
    }

    int area() {
        return this->length * this->breadth;
    }
};

int main() {
    Rectangle rect1(4, 5);

    cout << "Area using dot operator: " << rect1.area() << endl;

    Rectangle* ptr = &rect1;

    cout << "Area using arrow operator: " << ptr->area() << endl;

    ptr->setLength(6);
    ptr->setBreadth(7);
    cout << "New area after modification: " << ptr->area() << endl;

    return 0;
}
