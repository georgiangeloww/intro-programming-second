#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;

    cin >> a >> b >> c >> d >> e;

    int res = a ^ b ^ c ^ d ^ e;
    cout << res;

    return 0;
}