/**
 * Program to calculate the no of vowels, consonants, digits, symbols and whitespaces in a string.
 * Author: Sanjan Geet Singh <sanjangeet2109s@gmail.com>
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct VCDSW {
    int vowels = 0, consonants = 0, digits = 0, symbols = 0, whitespaces = 0;
};

bool isVowel(char c) {
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (auto v: vowels) {
        if (v == c)
            return true;
    }
    return false;
}

int main() {
    VCDSW vcdsw;
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    for (auto c: s) {
        if (c == ' ') {
            vcdsw.whitespaces++;
        } else if (('0' <= c) && (c <= '9')) {
            vcdsw.digits++;
        } else if (isVowel(c)) {
            vcdsw.vowels++;
        } else if ((('A' <= c) && (c <= 'Z')) || (('a' <= c) && (c <= 'z'))) {
            vcdsw.consonants++;
        } else {
            vcdsw.symbols++;
        }
    }

    cout << "Vowels: " << vcdsw.vowels << endl
         << "Consonants: " << vcdsw.consonants << endl
         << "Digits: " << vcdsw.digits << endl
         << "Whitespaces: " << vcdsw.whitespaces << endl
         << "Symbols: " << vcdsw.symbols << endl;

    return 0;
}
