    #include <iostream>
    using namespace std;

    class Number {
    protected:
        int num;
    public:
        void setNumber(int n) {
            num = n;
        }
    };

    class Square : public Number {
    public:
        void showSquare() {
            cout << "Square of " << num << " = " << num * num << endl;
        }
    };

    class Cube : public Number {
    public:
        void showCube() {
            cout << "Cube of " << num << " = " << num * num * num << endl;
        }
    };

    int main() {
        Square s;
        Cube c;

        int value;
        cout << "Enter a number: ";
        cin >> value;

        s.setNumber(value);
        c.setNumber(value);

        s.showSquare();
        c.showCube();

        return 0;
    }