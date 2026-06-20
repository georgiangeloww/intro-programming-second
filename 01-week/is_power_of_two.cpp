#include <iostream>

bool isPowerOfTwo(int number);

int main() {
    int num;
    std::cin >> num;

    if (isPowerOfTwo(num)) {
        std::cout << "The number is power of two!";
    }
    else {
        std::cout << "The number is NOT power of two!";
    }

    return 0;
}

bool isPowerOfTwo(int number) {
    // if(number < 1) return false;
    // while(number % 2 == 0) {
    //     number /= 2;
    // }
    // return number == 1;
    if (number < 1) return false;
    return (number & (number - 1)) == 0;
}