//
// Created by Admin on 3/21/2025.
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

void strcpy(char *copyy, char *src) {
    while ((*copyy = *src)) {
    }
}

void delete_char(char *a, char c) {
    char *copyy = a;
    while (*a) {
        if (*a != c) {
            *copyy = *a;
            *copyy++;
        }
        a++;
    }
    *copyy = '\0';
}

int main() {
    char str[100] = "chung toi tu hao la nguoi viet nam";
    char c = 'n';
    cout << "xau ban dau la: " << str << '\n';
    delete_char(str, c);
    cout << "xau sau khi xoa di " << c << " la: " << str << '\n';
    return 0;
}
