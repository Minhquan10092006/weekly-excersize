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

bool doiguong(char a[]) {
  int len = strlen(a);
  char *start = a;
  char *end = a + len - 1;
  while (start < end) {
    if (*start != *end) {
      return false;
    }
    start++;
    end--;
  }
  return true;
}

int main() {
  char a[100] = "aabbccdd";
  char b[100] = "abccba";
  if (doiguong(a)) {
    cout << a << " la xau doi xung" << '\n';
  } else {
    cout << a << " khong phai xau doi xung" << '\n';
  }
  if (doiguong(b)) {
    cout << b << " la xau doi xung" << '\n';
  } else {
    cout << b << " khong phai xau doi xung" << '\n';
  }
  return 0;
}
