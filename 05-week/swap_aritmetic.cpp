#include "array_gen.hpp"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    int n;
    cin >> n;

    int* cur_arr = new int[n];
    int* arr = generateArr(cur_arr, n);

    print(arr, n);

    // работи с n кратни на 6
    // int method = (i / 2) % 3; и проверки за кой метод да се изполва, от n = 0 при проверка i + 1 < n като към 
    // i +=2
    for (int i = 0; i + 5 < n; i += 6) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        
        arr[i + 2] = arr[i + 2] + arr[i + 3];
        arr[i + 3] = arr[i + 2] - arr[i + 3];
        arr[i + 2] = arr[i + 2] - arr[i + 3];
        
        if (arr[i + 5] != 0) {
            arr[i + 4] = arr[i + 4] * arr[i + 5];
            arr[i + 5] = arr[i + 4] / arr[i + 5];
            arr[i + 4] = arr[i + 4] / arr[i + 5];
        }
        else {
            int temp = arr[i + 4];
            arr[i + 4] = arr[i + 5];
            arr[i + 5] = temp;
        }
    }

    print(arr, n);

    if (arr != nullptr) {
        delete[] arr;
    }
    arr = nullptr;

    return 0;
}