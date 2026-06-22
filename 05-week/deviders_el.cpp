#include "array_gen.hpp"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;


void findDividors(int n) {
    for(int j = 2; j < (n / 2) + 1; j++) {
        if(n % j == 0) {
            cout << j << ", ";
        }
    }
    return;
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    int* cer_arr = generateArr(arr, n);
    print(arr, n);
    

    for(int i = 0; i < n; i++) {
        cout << "Елемент " << cer_arr[i] << " има делители: ";
        findDividors(cer_arr[i]);
        cout << endl;
    }

    
    if(arr != nullptr) {
        delete[] arr;
    }
    arr = nullptr;

    return 0;
}