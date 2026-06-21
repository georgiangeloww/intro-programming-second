#include "array_gen.hpp"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    int* cer_arr = generateArr(arr, n);
    print(arr, n);
    

    for(int i = 0; i < n; i++) {
        bool find = false;
        int tmp = cer_arr[i];
        while(cer_arr[i]) {
            int digit = cer_arr[i] % 10;
            cer_arr[i] /= 10;
            if(i == digit) {
                find = true;
            }
        }
        if(find) {
            cout << "Числото " << tmp << " на позиция " << i << endl;
        }
    }

    
    if(arr != nullptr) {
        delete[] arr;
    }
    arr = nullptr;

    return 0;
}