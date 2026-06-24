#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main() {
    const int MAX_NAMES = 100;
    const int MAX_LEN = 21;
    char names[MAX_NAMES][MAX_LEN];
    int count = 0;
    
    cin >> *(names + count);
    while (names[count][0] != '0') {
        count++;
        if(count >= MAX_NAMES) {
            cerr << "Above the names count"; 
            return 1;
        }
        cin >> names[count];
    }

    char letter;
    cin >> letter;


    for (int i = 0; i < count; i++) {
        if(tolower(names[i][0]) == tolower(letter)) {
            cout << names[i] << " ";
        }
    }
    cout << endl;

    return 0;
}