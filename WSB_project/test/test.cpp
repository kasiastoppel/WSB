#include "../src/code.hpp"

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

if(add(-4, 3) != -1){
    cerr << "Fail: wrong answer!" << endl;
    return 1;
}

if(add(5, 4) != 9){
    cerr << "Fail: wrong answer!" << endl;
    return 1;
}


cout << "OK" << endl;


    return 0;
}
