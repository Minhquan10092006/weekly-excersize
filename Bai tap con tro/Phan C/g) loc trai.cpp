//
// Created by Admin on 3/22/2025.
//
#include <iostream>
using namespace std;

void loc_trai(char a[]) {
    char *start = a;
    while (*start == ' ' || *start == '\t') start++;
    char *dest = a;
    while (*start) {
        *dest++ = *start++;
    }
    *dest = '\0';
}


int main() {
    char str[100] = "                 chung toi tu hao la nguoi viet nam";
    cout << "xau ban dau la: " << str << '\n';
    loc_trai(str);
    cout << "xau sau khi loc bot khoang trang la: " << str << '\n';
    return 0;
}

