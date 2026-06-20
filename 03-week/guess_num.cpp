#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    int number;
    cin >> number;
    int max = 20;
    int min = 1;
    srand(time(0));

    int randNum = rand() % (max - min + 1) + min;
    cout << boolalpha;
    if(randNum == number) {
        cout << true;
    }
    else {
        cout << false;
    }

    return 0;
}