#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 7;
    int* ptrA = &a;
    int* ptrB = &b;
    ptrA = &b;
    ptrB = &a;

    cout << *ptrA << " " << &ptrA << endl;
    cout << *ptrB << " " << &ptrB << endl;

    return 0;
}