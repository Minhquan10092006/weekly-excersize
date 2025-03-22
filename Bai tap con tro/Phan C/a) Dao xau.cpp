//
// Created by Admin on 3/21/2025.
//
#include <iostream>
using namespace std;

void reverse(char *a) {
    char *start = a;
    char *end = a;
    while (*end != '\0') {
        end++;
    }
    end--;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[] = "hello dai ca";
    cout << "truoc khi dao: " << str << '\n';
    reverse(str);
    cout << "sau khi dao: " << str << '\n';
    return 0;
}
