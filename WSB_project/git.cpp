#include <iostream>
using namespace std;

int add(int,int);

int add(int a, int b) {
    return a+b;
}

int main() {
    int a;
    int b;

    cout << "Wprowadź liczbę rzeczywistą a " << endl;
    cin >> a;
    cout << "Wprowadź liczbę rzeczywistą b " << endl;
    cin >> b;

    cout << "Wynik dodawania to "<< add(a,b) << endl;
   



    return 0;
}