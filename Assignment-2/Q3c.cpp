#include <iostream>
using namespace std;

class Counter {
public:
    static int count;
};

int Counter::count = 0;  

int main() {
    Counter::count = 10;  
    cout << "Static count: " << Counter::count << endl;
    return 0;
}
