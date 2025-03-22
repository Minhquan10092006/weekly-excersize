//
// Created by Admin on 3/22/2025.
//
#include <iostream>
using namespace std;

int strlen(const char *a) {
    int length = 0;
    while (*a++) {
        length++;
    }
    return length;
}

void don_trai(char a[], int n) {
    int len = strlen(a);
    if (len < n) {
        int spaces = n - len;
        for (int i = len; i >= 0; i--) {
            a[i + spaces] = a[i];
        }
        for (int i = 0; i < spaces; i++) {
            a[i] = ' ';
        }
    }
}

int main() {
    char str[100] = "chung toi tu hao la nguoi viet nam";
    int x = 50;
    cout << "xau ban dau la: " << str << '\n';
    don_trai(str, x);
    cout << "xau sau khi don trai toi " << x << " ki tu la: " << str << '\n';
    return 0;
}
