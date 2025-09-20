#include <iostream>
using namespace std;    

class Rectangle {
private:
    int length;
    int breadth;

public:
    Rectangle(int l = 0, int b = 0) : length(l), breadth(b) {
        cout << "Rectangle created: length=" << length << ", breadth=" << breadth << endl;
    }

    ~Rectangle() {
        cout << "Rectangle destroyed: length=" << length << ", breadth=" << breadth << endl;
    }

    int area() {
        return length * breadth;
    }
};

int main() {
    Rectangle rectArray[3] = { Rectangle(), Rectangle(5), Rectangle(4, 6) };

    for (int i = 0; i < 3; i++) {
        cout << "Area of rectArray[" << i << "] = " << rectArray[i].area() << endl;
    }

    return 0;
}
