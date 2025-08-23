#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollno;

public:
    Student(string n, int r) {
        name = n;
        rollno = r;
    }

    void display() const {
        cout << "Name: " << name << ", Roll No: " << rollno << endl;
    }
};

int main() {
    Student s("Sehajdeep", 101);
    s.display();

    return 0;
}
