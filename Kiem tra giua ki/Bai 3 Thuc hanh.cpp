//
// Created by Admin on 3/29/2025.
//
#include <iostream>
using namespace std;

void bubblesort(int a[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    bubblesort(a, n);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}

/*
    -Ưu điểm của bubble sort:
+) Đơn giản, dễ hiểu code, dễ code
+) Ổn định, ko cần thay đổi các vị trí của các phần tử có gias trị bằng nhau
+) Nếu mảng gần như đã sắp xếp, có thể dừng sớm (O(n) trong trường hợp tốt)
    -Nhược điểm của Bubble Sort:
+) Chậm với mảng lớn (O(n²) trong hầu hết các trường hợp).
+) Không hiệu quả so với Selection Sort và Insertion Sort trong thực tế

    SO SÁNH:
+) Bubble Sort quá chậm với mảng lớn, chỉ dùng để học thuật toán.
+) Insertion Sort là lựa chọn tốt hơn cho mảng nhỏ hoặc gần như đã sắp xếp.
+) Selection Sort có thể ít hoán đổi hơn nhưng không ổn định.

 */
