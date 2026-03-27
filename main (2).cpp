#include <iostream>
using namespace std;

int main() {
    const int n = 5; // Розмір матриці

    int matrix[n][n] = {
        { 3,  5, -2,  7,  1},
        {-4,  6,  8, -1,  2},
        { 9, -3,  4,  5, -6},
        { 7,  2, -8,  3,  0},
        { 1, -5,  6,  2, -4}
    };

    // Виведення початкової матриці
    cout << "Початкова матриця:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    // Знаходимо мінімальний елемент головної діагоналі
    int min = matrix[0][0];

    for (int i = 0; i < n; i++) {
        if (matrix[i][i] < min) {
            min = matrix[i][i];
        }
    }

    // Виведення результату
    cout << endl;
    cout << "Мінімальний елемент головної діагоналі: " << min << endl;

    return 0;
}