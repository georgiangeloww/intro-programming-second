#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;

int** genenate2DArr(int**, int, int);
void print(int**, int, int);

bool sumRowsAndCol(int**, int);

int main() {
    
    int n, m;
    cin >> n >> m;

    int** arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
    }
    int** array = genenate2DArr(arr, n, m);

    if(sumRowsAndCol(array, n)) cout << "Квадрата е магически!";
    else cout << "Квадрета НЕ е магически!";

    for (int i = 0; i < n; i++) {
        delete[] arr[i];
        arr[i] = nullptr;
    }
    delete[] arr;
    arr = nullptr;


    return 0;
}

int** genenate2DArr(int** array, int row, int col) {
    srand(time(0));
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            array[i][j] = rand() % (20 - 1 + 1) + 1;
        }
    }
    return array;
}

void print(int** array, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << array[i][j] << ' ';
        }
        cout << endl;
    }
}

bool sumRowsAndCol(int** array, int n) {
    int sumSecDiag = 0;
    int magicSum = 0;
    for (int i = 0; i < n; i++) {
        magicSum += array[i][i];
        sumSecDiag += array[i][n - i - 1];
    }
    if (magicSum != sumSecDiag) return false;
    for (int i = 0; i < n; i++) {
        int sumNorm = 0;
        int sumTran = 0;
        for (int j = 0; j < n; j++) {
            sumNorm += array[i][j];
            sumTran += array[j][i];
        }
        if (sumNorm != magicSum || sumTran != magicSum) return false;
    }
    return true;
}