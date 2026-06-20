#include <iostream>
using namespace std;

int main() {
    int number, bit;
    cin >> number >> bit;
    
    if (((number >> (bit - 1)) & 1) == 1) {
        cout << "Бита е установен!";
    }
    else {
        cout << "Бита НЕ е установен!";
    }
    


    return 0;
}