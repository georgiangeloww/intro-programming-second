#include "array_gen.hpp"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];
    int* cur_arr = generateArr(arr, n);

    print(cur_arr, n);

    // two-pointer algorithm O(n/2) -> O(n)
    // one var addition O(1)
    for (int i = 0; i < n / 2; i++) {
        int temp = cur_arr[i];
        cur_arr[i] = cur_arr[n - i - 1];
        cur_arr[n - i - 1] = temp;
    }

    print(cur_arr, n);

    if (arr != nullptr) {
        delete[] arr;
    }
    arr = nullptr;

    return 0;
}