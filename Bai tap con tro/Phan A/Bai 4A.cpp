//
// Created by Admin on 3/21/2025.
//
#include <iostream>
using namespace std;

// Hàm tìm kiếm nhị phân đệ quy dùng con trỏ
int binarySearchRecursive(int *left, int *right, int target) {
    if (left > right)
        return -1;

    int *mid = left + (right - left) / 2;

    if (*mid == target)
        return mid - left;

    if (*mid < target)
        return binarySearchRecursive(mid + 1, right, target);

    return binarySearchRecursive(left, mid - 1, target);
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Nhap so can tim: ";
    cin >> target;

    int result = binarySearchRecursive(arr, arr + size - 1, target);

    if (result != -1)
        cout << "Tim thay " << target << " o vi tri " << result << endl;
    else
        cout << "Khong tim thay " << target << endl;

    return 0;
}
