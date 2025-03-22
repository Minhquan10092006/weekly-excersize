//
// Created by Admin on 3/21/2025.
//
#include <iostream>
using namespace std;

int main() {
    //tinh kich thuoc kieu char
    char c = 'A';
    char *cp = &c;
    cout << "Kich thuoc kieu char: " << ((cp + 1) - cp) * sizeof(char) << " byte" << '\n';

    // tinh kich thuoc kieu int
    int n = 4;
    int *ip = &n;
    cout << "Kich thuoc kieu int: " << ((ip + 1) - ip) * sizeof(int) << " byte" << '\n';

    // tinh kich thuoc kieu double
    double u = 1.5;
    double *dp = &u;
    cout << "Kich thuoc kieu double: " << ((dp + 1) - dp) * sizeof(double) << " byte" << '\n';

    // phan c: thu cp +=2;

    cp += 2;
    cout << "dia chi moi cua cp sau khi += 2: " << (void *) cp << '\n';
    cout << "su chenh lech: " << (cp - &c) * sizeof(char) << '\n';
    return 0;
}

