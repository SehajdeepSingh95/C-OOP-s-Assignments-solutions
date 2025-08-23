#include <iostream>
using namespace std;

class Counter {
private:
    static int count;  

public:
    static void increment() {
        count++;
    }

    static void display() {
        cout << "Count: " << count << endl;
    }
};

int Counter::count = 0;  

int main() {
    Counter::display();

    Counter::increment();
    Counter::increment();

    Counter::display();

    return 0;
}