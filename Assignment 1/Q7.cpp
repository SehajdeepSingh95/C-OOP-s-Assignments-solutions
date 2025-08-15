#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }
    void display() {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i" << endl;
        else
            cout << " - " << -imag << "i" << endl;
    }
    Complex sum(Complex c) {
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }
};

int main() {
    double r1, i1, r2, i2;

    cout << "Enter first complex number (real and imaginary): ";
    cin >> r1 >> i1;

    cout << "Enter second complex number (real and imaginary): ";
    cin >> r2 >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);

    cout << "\nFirst complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    Complex c3 = c1.sum(c2);
    cout << "\nSum of complex numbers: ";
    c3.display();

    return 0;
}