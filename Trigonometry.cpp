/**
 * Program to reimplement the sin, cos and tan functions from scratch.
 * Author: Sanjan Geet Singh <sanjangeet2109s@gmail.com>
 */

#include <iostream>
using namespace std;

int factorial(int x) {
    int y = 1;
    for (int i=2; i<=x; i++)
        y *= i;
    return y;
}

float pow(float x, int y) {
    float res = 1;
    for (int i=0; i<y; i++)
        res *= x;
    return res;
}

float sin(float rad) {
    float r = rad;
    for (int i=2; i<7; i++) {
        int x = 2 * i - 1;
        r -= pow(-1, i) * pow(rad, x) / factorial(x);
    }
    return r;
}

float cos(float rad) {
    float r = 1;
    for (int i=2; i<7; i++) {
        int x = 2 * i - 2;
        r -= pow(-1, i) * pow(rad, x) / factorial(x);
    }
    return r;
}

float tan(float rad) {
    return sin(rad) / cos(rad);
}

int main() {
    float x;
    cout << "Enter radians: ";
    cin >> x;

    cout << "Tangent of " << x << " is " << tan(x) << ".\n";
    return 0;
}
