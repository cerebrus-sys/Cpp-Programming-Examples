/**
 * Program to print "Well Done" on the screen 'n' number of times without quotes.
 * Author: Sanjan Geet Singh <sanjangeet2109s@gmail.com>
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i=0; i<n; i++) {
        cout << "Well Done" << endl;
    }

    return 0;
}
