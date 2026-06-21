#include "array_gen.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;



int* generateArr(int* array, int size) {
    srand(time(0));
    for(int i = 0; i < size; i++) {
        int genNum = rand() % (50 - 1 + 1) + 1;
        array[i] = genNum;
    }
    return array;
}

void print(int* array, int size) {
    for(int i = 0; i < size; i++) {
        cout << array[i] << endl; 
    }
}
