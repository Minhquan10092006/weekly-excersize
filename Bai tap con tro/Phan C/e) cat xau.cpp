//
// Created by Admin on 3/22/2025.
//
#include <iostream>
using namespace std;

int strlen(const char *a) {
    int length = 0;
    while (*a++) length++;
    return length;
}

void truncate(char a[], int n) {
    int len = strlen(a);
    if (len > n) {
        a[n] = '\0';
    }
}

int main() {
    char str[100] = "chung toi tu hao la nguoi viet nam";
    int x = 20;
    cout << "xau ban dau la: " << str << '\n';
    truncate(str, x);
    cout << "xau sau khi cat bot de ko dai qua " << x << " ki tu la: " << str << '\n';
    return 0;
}
