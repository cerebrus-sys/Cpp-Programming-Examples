/**
 * Program to reverse a string.
 * Author: Sanjan Geet Singh <sanjangeet2109s@gmail.com>
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, rs;

    cout << "Enter a string: ";
    getline(cin, s);

    for (int i=s.length(); i>=0; i--) {
        rs += s[i];
    }

    cout << "Reversed string: " << rs << endl;
    return 0;
}
