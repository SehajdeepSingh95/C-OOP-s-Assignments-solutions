#include <iostream>
#include <string>
using namespace std;

struct Student {
    string Name;
    int RollNo;
    string Degree;
    string Hostel;
    float CurrentCGPA;

    void addDetails() {
        cout << "Enter Name: ";
        cin >> Name;
        cout << "Enter Roll No: ";
        cin >> RollNo;
        cout << "Enter Degree: ";
        cin >> Degree;
        cout << "Enter Hostel: ";
        cin >> Hostel;
        cout << "Enter Current CGPA: ";
        cin >> CurrentCGPA;
    }

    void updateDetails() {
        cout << "Update Name: ";
        cin >> Name;
        cout << "Update Roll No: ";
        cin >> RollNo;
        cout << "Update Degree : ";
        cin >> Degree;
    }

    void updateCGPA() {
        cout << "Enter new CGPA: ";
        cin >> CurrentCGPA;
    }

    void updateHostel() {
        cout << "Enter new Hostel : ";
        cin >> Hostel;
    }

    void displayDetails() {
        cout << "\nStudent Details:\n";
        cout << "Name: " << Name << endl;
        cout << "Roll No: " << RollNo << endl;
        cout << "Degree: " << Degree << endl;
        cout << "Hostel: " << Hostel << endl;
        cout << "Current CGPA: " << CurrentCGPA << endl;
    }
};

int main() {
    Student s;
    s.addDetails();
    s.displayDetails();

    cout << "\nUpdating CGPA and Hostel...\n";
    s.updateCGPA();
    s.updateHostel();
    s.displayDetails();

    return 0;
}
