#include <iostream>
using namespace std;

class Example {
private:
    void privateFunction() {
        cout << "Private function called!" << endl;
    }

public:
    void publicFunction() {
        cout << "Inside public function." << endl;
        privateFunction();
        cout << "Accessing private function from public function again..." << endl;
        privateFunction();
    }
};

int main() {
    Example obj;
    obj.publicFunction();
    return 0;
}