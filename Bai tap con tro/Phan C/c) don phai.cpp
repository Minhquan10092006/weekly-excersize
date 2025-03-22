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

void don_phai(char a[], int n) {
    int len = strlen(a);
    if (len < n) {
        char *end = a + len;
        for (int i = 0; i < len; i++) {
            *end++ = ' ';
        }
        *end = '\0';
    }
}

int main() {
    char str[100] = "chung toi tu hao la nguoi viet nam";
    int x = 50;
    cout << "xau ban dau la: " << str << '\n';
    don_phai(str, x);
    cout << "xau sau khi don phai toi " << x << " ki tu la: " << str << "|" << '\n';
    return 0;
}
