#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;

int** genenate2DArr(int**, int, int);
void print(int**, int, int);

int findMax(int**, int, int);
int sumAboveSec(int**, int, int);
void interestPrint(int**, int, int);
int productSec(int**, int );

int main() {
    int n, m;
    cin >> n >> m;

    int** arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
    }
    int** array = genenate2DArr(arr, n, m);

    print(array, n, m);
    // cout << "Max el under the main diag is: " << findMax(array, n, m) << endl;
    // cout << "Sum above the secondary diag including it is: " << sumAboveSec(array, n, m) << endl;
    // interestPrint(array, n, m);
    cout << productSec(array, n) << endl;


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
            array[i][j] = rand() % (9 - 0 + 1) + 0;
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

int findMax(int** array, int row, int col) {
    if(row == 1 && col == 1) {
        return array[0][0];
    }
    int max = array[1][0];
    for (int i = 1; i < row; i++) {
        for(int j = 0; j < i; j++) {
            if (array[i][j] > max) {
                max = array[i][j];
            }
        }
    }
    return max;
}


int sumAboveSec(int** arr, int n, int m) {
    int sum = 0;    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - i; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}

void interestPrint(int** arr, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i % 2 != 0) {
                cout << arr[i][j] << ' ';
            }
            else if (j % 2 == 0) {
                cout << arr[i][j] << "   ";
            }
        }
        cout << endl;
    }
}

int productSec(int** arr, int n) {
    int product = 1;
    for(int i = 0; i < n; i++) {
        product *= arr[i][n - i - 1];
    }
    return product;
}
