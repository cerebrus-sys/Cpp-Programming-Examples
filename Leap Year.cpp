/**
 * Program to find if a year is a leap year or not.
 * Author: Sanjan Geet Singh <sanjangeet2109s@gmail.com>
 */

#include <iostream>
using namespace std;

bool isLeapYear(int y) {
    return (y % 400 == 0) || ((y % 100 != 0) && (y % 4 == 0));
}

int main() {
    int n;
    cout << "Enter Year: ";
    cin >> n;

    cout << "Is Leap Year? " << (isLeapYear(n) ? "Yes" : "No") << endl;
    return 0;
}
