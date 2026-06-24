#include <iostream>

int powerOfNumber(int, unsigned);

int main() {
    int num, pow;
    std::cin >> num >> pow;

    std::cout << powerOfNumber(num, pow);

    return 0;
}

int powerOfNumber(int number, unsigned power) {
    if (power == 0) {
        return 1;
    }
    int result = 1;
    for (int i = 1; i < power + 1; i++) {
        result = result * number;
    }
    return result;
}