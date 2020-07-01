/**
 * Program to solve quadritic equation.
 * Author: Sanjan Geet Singh <sanjangeet2109s@gmail.com>
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, d;

    cout << "Equation Format: a(x**2) + bx + c = 0" << endl
         << "Enter a, b, c: ";
    cin >> a >> b >> c;

    d = (b*b) - (4*a*c);

    if (d == 0) {
        cout << "X = �" << b/(2*a) << endl;
    } else if (d > 0) {
        cout << "X1 = " << -b-sqrt(d)/(2*a) << endl
             << "X2 = " << -b+sqrt(d)/(2*a) << endl;
    } else {
        cout << "X = " << -b/(2*a) << "�" << sqrt(-d)/(2*a) << endl;
    }

    return 0;
}
