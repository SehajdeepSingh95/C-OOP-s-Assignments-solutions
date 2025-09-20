#include <iostream>
using namespace std;

class Fruit {
protected:
    int count;
public:
    Fruit() : count(0) {}
    void setCount(int n) {
        count = n;
    }
    int getCount() {
        return count;
    }
};

class Apples : public Fruit {
public:
    void showApples() {
        cout << "Number of Apples: " << count << endl;
    }
};

class Mangoes : public Fruit {
public:
    void showMangoes() {
        cout << "Number of Mangoes: " << count << endl;
    }
};

int main() {
    Apples a;
    Mangoes m;

    int appleCount, mangoCount;

    cout << "Enter number of Apples: ";
    cin >> appleCount;
    cout << "Enter number of Mangoes: ";
    cin >> mangoCount;

    a.setCount(appleCount);
    m.setCount(mangoCount);

    a.showApples();
    m.showMangoes();

    int total = a.getCount() + m.getCount();
    cout << "Total number of fruits in basket: " << total << endl;

    return 0;
}
