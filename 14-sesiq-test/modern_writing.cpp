#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int size = 0;
    int capacity = 10;
    char* text = new char[capacity];
    char c;

    while(cin.get(c) && c != '\n') {
        if(size >= capacity - 1) {
            capacity *= 2;
            char* temp = new char[capacity];
            for(int i = 0; i < size; i++) {
                temp[i] = text[i];
            }
            delete[] text;
            text = temp;
        }
        text[size++] = c;
    }
    text[size] = '\0';

    int newSize = 0;
    for(int i = 0; i < size; i++) {
        if(!ispunct(text[i])) {
            text[newSize++] = tolower(text[i]);
        }
    }
    text[newSize] = '\0';

    cout << text << endl;

    if(text != nullptr) {
        delete[] text;
    }
    text = nullptr;

    return 0;
}