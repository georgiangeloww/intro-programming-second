#include <iostream>
#define endl '\n'
using std::cin;
using std::cout;


int main(){
    int height, weight;
    cin >> height >> weight;

    int area_rectangle = height * weight;
    cout << "The area of rectangle in cm is: " << area_rectangle;

    return 0;
}