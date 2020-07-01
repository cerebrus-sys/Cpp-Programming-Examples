/**
 * Program to print the multiplication table of 'n'.
 * Author: Sanjan Geet Singh <sanjangeet2109s@gmail.com>
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i=0; i<=20; i++) {
        printf("%i * %i = %i\n", n, i, n*i);
    }

    return 0;
}
