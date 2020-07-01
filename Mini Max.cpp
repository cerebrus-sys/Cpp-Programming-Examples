/**
 * Program to find the maximum and minimum value in an array.
 * Author: Sanjan Geet Singh <sanjangeet2109s@gmail.com>
 */

#include <bits/stdc++.h>
using namespace std;

template <class T>
T maxi(vector<T> ar) {
    T maxi = ar[0];
    for (int i=1; i<ar.size(); i++)
        if (ar[i] > maxi)
            maxi = ar[i];
    return maxi;
}

template <class T>
T mini(vector<T> ar) {
    T mini = ar[0];
    for (int i=1; i<ar.size(); i++)
        if (ar[i] < mini)
            mini = ar[i];
    return mini;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> ar;
    ar.resize(n);
    for (int i=0; i<n; i++) {
        printf("Enter the value of element %i: ", i);
        cin >> ar[i];
    }

    cout << "Maximum Value is " << maxi(ar) << endl
         << "Minimum Value is " << mini(ar) << endl;

    return 0;
}
