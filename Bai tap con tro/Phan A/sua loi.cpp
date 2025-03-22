//
// Created by Admin on 3/21/2025.
//
#include <iostream>
using namespace std;

int main() {
    char **s;
    char foo[] = "Hello world";
    s = new char *;
    *s = foo;
    cout << "s is " << *s << '\n';
    s[0] = foo;
    cout << "s[0] is " << s[0] << '\n';
    return (0);
}

