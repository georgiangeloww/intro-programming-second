#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 7;
    int* ptrA = &a;
    int* ptrB = &b;
    int* tmp = nullptr;
    
    tmp = ptrB;
    ptrB = ptrA;
    ptrA = tmp;


    cout << *ptrA << " " << &ptrA << endl;
    cout << *ptrB << " " << &ptrB << endl;

    return 0;
}