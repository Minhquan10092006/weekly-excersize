//
// Created by Admin on 3/21/2025.
//
#include <iostream>
using namespace std;

char *weird_string() {
    char c[] = "123345"; // Mảng c là biến cục bộ
    return c; // Trả về con trỏ trỏ đến mảng c
}

int main() {
    char *result = weird_string();
    cout << "Chuoi nhan duoc: " << result << endl; // Bị trả về null
    return 0;
}
