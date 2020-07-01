/**
 * Program to find prime numbers in a range.
 * Author: Sanjan Geet Singh <sanjangeet2109s@gmail.com>
 */

#include <iostream>
#include <vector>
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

vector<int> __prime_numbers_in_range(int x, int y) {
    vector<int> ar = {};

    for (; x<y; x++) {
        if (isPrimeNumber(x)) {
            ar.push_back(x);
        }
    }

    return ar;
}

int main() {
    int l, h;
    cout << "Enter lower and upper range: ";
    cin >> l >> h;

    vector<int> prime_numbers = __prime_numbers_in_range(l, h);
    for (int i=0; i<prime_numbers.size(); i++) {
        cout << prime_numbers[i] << endl;
    }

    return 0;
}
