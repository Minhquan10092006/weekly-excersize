//
// Created by Admin on 3/21/2025.
//
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[50], str2[50];
    cout << "Nhap xau thu nhat:";
    cin.getline(str1, 50);
    cout << "Nhap xau thu hai:";
    cin.getline(str2, 50);

    int result = strcmp(str1, str2);
    if (result == 0) {
        cout << "Hai xau giong nhau " << '\n';
        return 0;
    } else if (result < 0) {
        cout << "Xau thu nhat nho hon xau thu hai " << '\n';
    } else {
        cout << "Xau thu nhat lon hon xau thu 2 " << '\n';
    }
}
