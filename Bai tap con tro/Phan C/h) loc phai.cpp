//
// Created by Admin on 3/22/2025.
//
#include <iostream>
using namespace std;

int strlen(const char *s) {
    int length = 0;
    while (*s++) length++;
    return length;
}

void loc_phai(char a[]) {
    int len = strlen(a);
    char *end = a + len - 1;
    while (end >= a && (*end == ' ' || *end == '\t')) {
        end--;
    }
    *(end + 1) = '\0';
}


int main() {
    char str[100] = "chung toi tu hao la nguoi viet nam                          ";
    cout << "xau ban dau la: |" << str << "|" << '\n';
    loc_phai(str);
    cout << "xau sau khi loc bot khoang trang la: |" << str << "|" << '\n';
    return 0;
}
