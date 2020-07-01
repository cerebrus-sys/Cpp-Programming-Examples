/**
 * Program to check if a number is prime number.
 * Author: Sanjan Geet Singh <sanjangeet2109s@gmail.com>
 */

#include <iostream>
using namespace std;

bool isPrimeNumber(int n) {
    if (n < 0) {
        n = -n;
    }

    if ((0 <= n) && (n <= 3)) {
        return true;
    } else if (n % 2 == 0) {
        return false;
    } else {
        for (int i=5; i<(n-1)/2; i++)
            if (n % i == 0)
                return false;
    }

    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Is Prime Number? " << (isPrimeNumber(n)? "Yes" : "No") << endl;
    return 0;
}
