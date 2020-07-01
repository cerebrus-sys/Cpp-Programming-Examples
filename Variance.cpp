/**
 * Program to calculate mean, variance and standard deviation.
 * Author: Sanjan Geet Singh <sanjangeet2109s@gmail.com>
 */

#include <iostream>
#include <cmath>
using namespace std;

double mean(double* ar, int n) {
    double sum = 0;
    for (int i=0; i<n; i++)
        sum += ar[i];
    return sum / n;
}

double variance(double* ar, int n, double mean) {
    double variance = 0;
    for (int i=0; i<n; i++) {
        variance += (mean - ar[i])*(mean - ar[i]);
    }
    return variance / n;
}

double std_deviation(double variance) {
    return sqrt(variance);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    double* ar = (double*)malloc(sizeof(double) * n);
    for (int i=0; i<n; i++) {
        cout << "Enter the value of element " << i << ": ";
        cin >> ar[i];
    }

    double mean = ::mean(ar, n);
    double variance = ::variance(ar, n, mean);
    double std_deviation = ::std_deviation(variance);

    cout << "Mean = " << mean << endl
         << "Variance = " << variance << endl
         << "Standard Deviation = " << std_deviation << endl;

    return 0;
}
