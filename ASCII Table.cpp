/**
 * Program to print ASCII Table
 * Author: Sanjan Geet Singh <sanjangeet2109s@gmail.com>
 */

#include <iostream>
using namespace std;

int main() {
    for (int i=0; i<256; i++) {
        cout << i << ": ";

        char c = char(i);
        if (c == '\n')
            cout << "NEWLINE";
        else if (c == ' ')
            cout << "SPACE";
        else if (c == '	')
            cout << "TAB";
        else
            cout << c;

        cout << endl;
    }
    return 0;
}
