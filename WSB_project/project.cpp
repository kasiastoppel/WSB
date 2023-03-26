#include <iostream>
using namespace std;

int main() {
    float a;
    float b;

    cout << "Wprowadź liczbę rzeczywistą a " << endl;
    cin >> a;
    cout << "Wprowadź liczbę rzeczywistą b " << endl;
    cin >> b;

    cout << a << "+" << b << "=" << a+b << endl;
    cout << a << "-" << b << "=" << a-b << endl;
    cout << a << "*" << b << "=" << a*b << endl;
    cout << a << "/" << b << "=" << a/b << endl;

    return 0;
}