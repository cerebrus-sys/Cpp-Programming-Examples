/**
 * Program to calculate factorial.
 * Author: Sanjan Geet Singh <sanjangeet2109s@gmail.com>
 */

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0)
        return 0;

    int res = 1;
    for (int i=2; i<=n; i++)
        res *= i;
    return res;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Factorial of n is " << factorial(n) << endl;
    return 0;
}
