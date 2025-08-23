#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, breadth;

    void setData(int l, int b) {
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }
};

int main() {
    int n;
    cout << "Enter number of rectangles: ";
    cin >> n;

    Rectangle rect[100];  

    for (int i = 0; i < n; i++) {
        int l, b;
        cout << "Enter length and breadth of rectangle " << i + 1 << ": ";
        cin >> l >> b;
        rect[i].setData(l, b);
    }

    cout << "\nAreas of rectangles:\n";
    for (int i = 0; i < n; i++) {
        cout << "Rectangle " << i + 1 << ": " << rect[i].area() << endl;
    }

    return 0;
}
