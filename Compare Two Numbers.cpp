/**
 * Program to compare two numbers.
 * Author: Sanjan Geet Singh <sanjangeet2109s@gmail.com>
 */

#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b) {
        cout << a << " is greater than " << b << ".\n";
    } else if (a < b) {
        cout << a << " is less than " << b << ".\n";
    } else {
        cout << "They're equal.\n";
    }

    return 0;
}
