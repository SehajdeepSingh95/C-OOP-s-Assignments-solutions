#include <iostream>
using namespace std;

class Student {
public:
    string name;
    void setName(string n);  
    void display();
};

void Student::setName(string n) {
    name = n;
}

void Student::display() {
    cout << "Name: " << name << endl;
}

int main() {
    Student s;
    s.setName("Sehajdeep");
    s.display();
    return 0;
}
