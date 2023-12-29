#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of lines of the Fibonacci triangle: ";
    cin >> n;

    int** arr = new int* [n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[i + 1];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (i == 0 || j == 0 || j == i) {
                arr[i][j] = 1;
            }
            else {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}