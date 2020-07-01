/**
 * Program to generate a random number.
 * Author: Sanjan Geet Singh <sanjangeet2109s@gmail.com>
 */

#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int min, max;
    cout << "Enter Minimum and Maximum Value: ";
    cin >> min >> max;

    cout << rand() % (max - min) + min;
    return 0;
}
