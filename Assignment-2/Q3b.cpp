#include <iostream>
using namespace std;

int num = 100;  

int main() {
    int num = 50;  
    cout << "Local num: " << num << endl;
    cout << "Global num: " << ::num << endl;  
    return 0;
}
