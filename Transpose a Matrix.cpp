/**
 * Program to transpose a matrix.
 * Author: Sanjan Geet Singh <sanjangeet2109s@gmail.com>
 */

#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<double>> MATRIX;

int main() {
    int r, c;
    MATRIX m, mt;

    cout << "Enter the number of rows and columns of matrix: ";
    cin >> r >> c;

    m.resize(c);
    for (int i=0; i<c; i++)
        m[i].resize(r);

    for (int i=0; i<c; i++) {
        for (int j=0; j<r; j++) {
            printf("Enter the value of element (%i, %i): ", i, j);
            cin >> m[i][j];
        }
    }

    cout << "Input Matrix:" << endl;
    for (int i=0; i<c; i++) {
        for (int j=0; j<r; j++) {
            cout << m[i][j] << ' ';
        }
        cout << endl;
    }

    mt.resize(r);
    for (int i=0; i<r; i++)
        mt[i].resize(c);

    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            mt[i][j] = m[j][i];
        }
    }

    cout << "Transposed Matrix:" << endl;
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++)
            cout << mt[i][j] << ' ';
        cout << endl;
    }

    return 0;
}
