/**
 * Program to sort an array in ascending and descending order.
 * Author: Sanjan Geet Singh <sanjangeet2109s@gmail.com>
 */

#include <bits/stdc++.h>
using namespace std;

template <class T>
vector<T> sort_ascendingly(vector<T> ar) {
    for (int i=0; i<ar.size()-1; i++) {
        for (int j=i; j<ar.size(); j++) {
            if (ar[i] > ar[j]) {
                T temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    return ar;
}

template <class T>
vector<T> sort_descendingly(vector<T> ar) {
    for (int i=0; i<ar.size()-1; i++) {
        for (int j=i; j<ar.size(); j++) {
            if (ar[i] < ar[j]) {
                T temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    return ar;
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

    auto a = sort_ascendingly(ar);
    auto b = sort_descendingly(ar);

    cout << "Ascending: ";
    for (auto i: a)
        cout << i << " ";
    cout << '\n';

    cout << "Descending: ";
    for (auto i: b)
        cout << i << " ";
    cout << '\n';

    return 0;
}
