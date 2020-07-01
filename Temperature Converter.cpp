/**
 * Program to convert between three units of temperature.
 * Author: Sanjan Geet Singh <sanjangeet2109s@gmail.com>
 */

#include <bits/stdc++.h>
using namespace std;

class Formulas {
public:
    float C2F(float t);
    float F2C(float t);
    float C2K(float t);
    float K2C(float t);
    float F2K(float t);
    float K2F(float t);
};

int main() {
    Formulas formulas;
    int choice;
    float temp;
    while (true) {
        cout << "1. Celsius to Fahrenheit" << endl
             << "2. Fahrenheit to Celsius" << endl
             << "3. Celsius to Kelvin" << endl
             << "4. Kelvin to Celsius" << endl
             << "5. Kelvin to Fahrenheit" << endl
             << "6. Fahrenheit to Kelvin" << endl
             << "7. Exit" << endl
             << "Enter Choice: ";
        cin >> choice;

        if (choice == 7)
            exit(0);
        else if ((0 < choice) && (choice < 7)) {
            cout << "Enter Temperature: ";
            cin >> temp;

            cout << "Resultant Temperature is ";
            switch (choice) {
                case 1: cout << formulas.C2F(temp) << endl; break;
                case 2: cout << formulas.F2C(temp) << endl; break;
                case 3: cout << formulas.C2K(temp) << endl; break;
                case 4: cout << formulas.K2C(temp) << endl; break;
                case 5: cout << formulas.K2F(temp) << endl; break;
                case 6: cout << formulas.F2K(temp) << endl;
            }
        } else
            cout << "Wrong Choice." << endl;

        cout << endl;
    }
    return 0;
}

float Formulas::C2F(float t) {
    return (t * 9 / 5) + 32;
}

float Formulas::F2C(float t) {
    return (t - 32) / 9 * 5;
}

float Formulas::C2K(float t) {
    return t + 273;
}

float Formulas::K2C(float t) {
    return t - 273;
}

float Formulas::K2F(float t) {
    return C2F(K2C(t));
}

float Formulas::F2K(float t) {
    return C2K(F2C(t));
}
