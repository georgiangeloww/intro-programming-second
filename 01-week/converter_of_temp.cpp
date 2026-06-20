#include <iostream>
using std::cin;
using std::endl;
using std::cout;

int main(){
    int number;
    cin >> number;

    char units;
    cin >> units;

    if(units == 'C'){
        number = (number * 9 / 5) + 32;
        cout << "The result of convertion from C to F is: " << number;
    }
    else if(units == 'F'){
        number = (number - 32) * 5 / 9; //	(32°F − 32) × 5/9 = 0°C
        cout << "The result of convertion from F to C is: " << number;
    }

    return 0;
}