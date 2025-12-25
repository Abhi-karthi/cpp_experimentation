#include <iostream>
using namespace std;

int add(const int a, const int b) {
    return a + b;
}

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    for (int i = 0; i < name.length(); i++) {
        name[i] = toupper(name[i]);
    }
    cout << "Hello, " + name << endl;
    cout << name.length();

    const int x = 10;
    const int *ptr = &x;
    cout << ptr << endl;

    string cars[4];
    cars[0] = "car";
    cout << cars[0] << endl;
    cout << add(3, 5);

    return add(3, 7); //
}

