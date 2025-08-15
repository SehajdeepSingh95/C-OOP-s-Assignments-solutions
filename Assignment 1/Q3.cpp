#include <iostream>
using namespace std;

int main() {
    int i;

    // 1. Standard for loop
    cout << "Standard for loop:" << endl;
    for (i = 0; i < 5; i++)
        cout << i << " ";
    cout << endl;

    // 2. For loop without initialization
    cout << "For loop without initialization:" << endl;
    i = 0;
    for (; i < 5; i++)
        cout << i << " ";
    cout << endl;

    // 3. For loop without increment
    cout << "For loop without increment:" << endl;
    for (i = 0; i < 5;)
    {
        cout << i << " ";
        i++;
    }
    cout << endl;

    // 4. While loop
    cout << "While loop:" << endl;
    i = 0;
    while (i < 5)
    {
        cout << i << " ";
        i++;
    }
    cout << endl;

    // 5. Do-while loop
    cout << "Do-while loop:" << endl;
    i = 0;
    do
    {
        cout << i << " ";
        i++;
    } while (i < 5);
    cout << endl;

    // 6. Do-while demonstrating execution at least once
    cout << "Do-while with i starting at 10:" << endl;
    i = 10;
    do
    {
        cout << i << " ";
        i++;
    } while (i < 5);
    cout << endl;

    return 0;
}
