/**
 * Program to multiply two matrices.
 * Author: Sanjan Geet Singh <sanjangeet2109s@gmail.com>
 */

#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<double>> matrix;

matrix dot(matrix a, matrix b) {
    matrix ab;

    if (a[0].size() != b.size()) {
        cout << "Error while trying to multiplying the matrices." << endl;
        exit(0);
    }

    ab.resize(a.size());
    for (int i=0; i<a.size(); i++)
        ab[i].resize(b[0].size());

    for (int i=0; i<a.size(); i++)
        for (int j=0; j<b[0].size(); j++)
            for (int k=0; k<a[0].size(); k++)
                ab[i][j] += a[i][k] * b[k][j];

    return ab;
}

int main() {
    int r, c;
    matrix a, b;

    cout << "Enter the number of rows and columns of matrix A: ";
    cin >> r >> c;

    a.resize(r);
    for (int i=0; i<r; i++)
        a[i].resize(c);

    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            printf("Enter the value of element (%i, %i): ", i, j);
            cin >> a[i][j];
        }
    }

    cout << "Matrix A: " << endl;
    for (int i=0; i<a.size(); i++) {
        for (int j=0; j<a[i].size(); j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    cout << "Enter the number of rows and columns of matrix B: ";
    cin >> r >> c;

    b.resize(r);
    for (int i=0; i<r; i++)
        b[i].resize(c);

    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            printf("Enter the value of element (%i, %i): ", i, j);
            cin >> b[i][j];
        }
    }

    cout << "Matrix B: " << endl;
    for (int i=0; i<b.size(); i++) {
        for (int j=0; j<b[i].size(); j++) {
            cout << b[i][j] << ' ';
        }
        cout << endl;
    }

    matrix ab = dot(a, b);

    cout << "Result: " << endl;
    for (int i=0; i<ab.size(); i++) {
        for (int j=0; j<ab[i].size(); j++) {
            cout << ab[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
