//
// Created by Admin on 3/20/2025.
//
#include <iostream>
using namespace std;

int countEven(int arr[], int size) {
  int even = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 == 0) {
      even++;
    }
  }
  return even;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(arr) / sizeof(arr[0]);
  cout << countEven(arr, size) << endl;
  return 0;
}
