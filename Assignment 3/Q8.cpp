#include <iostream>
using namespace std;

int main() {
    int *p = new int;  
    *p = 100;  
    cout << "Value stored in dynamically allocated integer: " << *p << endl;
    delete p;  

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int *arr = new int[n];  

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "You entered: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;  

    return 0;
}
