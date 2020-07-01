/**
 * Program to find if a number is armstrong number.
 * Author: Sanjan Geet Singh <sanjangeet2109s@gmail.com>
 */

#include <bits/stdc++.h>
using namespace std;

bool isArmstrongNumber(int n) {
    int number = n;
    int sum = 0;

    vector<int> digits;
    while (n != 0) {
        int x = n % 10;
        n = (n - x) / 10;
        digits.push_back(x);
    }

    for (auto i: digits)
        sum += pow(i, digits.size());

    return number == sum;
}

int main() {
    int l, h;
    cout << "Enter lower and upper range: ";
    cin >> l >> h;

    for (; l<h; l++) {
        if (isArmstrongNumber(l)) {
            cout << l << endl;
        }
    }

    return 0;
}
