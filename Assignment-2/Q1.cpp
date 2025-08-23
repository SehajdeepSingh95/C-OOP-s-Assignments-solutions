#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollno;

    Student(string n = "", int r = 0) {
        name = n;
        rollno = r;
    }

    void display() {
        cout << "Name: " << name << ", Roll No: " << rollno << endl;
    }
};

Student updateStudent(Student s) {
    s.name = "Updated " + s.name;
    s.rollno += 1;
    return s;
}

int main() {
    Student s1("Sehajdeep", 101);
    cout << "Before update: ";
    s1.display();

    Student s2 = updateStudent(s1);
    cout << "After update (new object): ";
    s2.display();

    return 0;
}
