//
// Created by Admin on 3/29/2025.
//
#include <iostream>
using namespace std;

int binarySearch(int a[], int left, int right, int x) {
    if (left > right) return -1; // Không tìm thấy

    int mid = left + (right - left) / 2; // Tránh tràn số khi tính (left + right) / 2

    if (a[mid] == x) return mid; // Tìm thấy x ở vị trí mid
    else if (a[mid] > x) return binarySearch(a, left, mid - 1, x); // Tìm bên trái
    else return binarySearch(a, mid + 1, right, x); // Tìm bên phải
}

int main() {
    int a[] = {1, 3, 5, 7, 9, 11, 13}; // Mảng đã sắp xếp
    int n = sizeof(a) / sizeof(a[0]);
    int x;
    cout << "nhap so can tim: ";
    cin >> x;

    int result = binarySearch(a, 0, n - 1, x);
    if (result != -1) cout << "tim thay " << x << " tai vi tri: " << result << '\n';
    else cout << "khong tim thay " << x << '\n';
    return 0;
}
