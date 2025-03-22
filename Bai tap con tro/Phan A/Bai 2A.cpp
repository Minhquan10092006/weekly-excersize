//
// Created by Admin on 3/20/2025.
//
#include <iostream>
using namespace std;
void f(int arr[], int size) {
    cout << "kich thuoc trong ham f: " << sizeof(arr) << '\n'; //la size cua con tro tro den dia chi dau tien cua mang
    cout << "so phan tu trong mang truyen vao: " << size << '\n';
}

int main() {
    int A[] = {1, 2, 3, 4, 5}; //
    int sizeA = sizeof(A) / sizeof(A[0]);


    cout << "kich thuoc mang a trong main: " << sizeof(A) << '\n';
        cout << "so phan tu trong mang a : " << sizeA << '\n';
    f(A, sizeA);

    return 0;
}

