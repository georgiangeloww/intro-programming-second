#include <iostream>
using namespace std;

int main() {
    int a, q, n;
    cin >> a >> q >> n;

    for(int i = 1; i < n + 1; i++) {
        cout << a << " "; 
        a = a + q;
    }

    return 0;
}