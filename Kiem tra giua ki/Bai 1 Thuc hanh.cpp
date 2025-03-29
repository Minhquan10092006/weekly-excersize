//
// Created by Admin on 3/29/2025.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int k;
    cin >> k;
    for (int i = 0; i < k; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == k) {
                cout << a[i] << " " << a[j] << '\n';
            }
        }
    }
    return 0;
}

