#include<bits/stdc++.h>
using namespace std;
void quickSort(int arr[], int left, int right) {
    int i = left, j = right;
    int pivot = arr[(left + right) / 2]; // 选取中间元素作为基准

    // 分割数组
    while (i <= j) {
        while (arr[i] < pivot) {
            i++;//右移 
        }
        while (arr[j] > pivot) {
            j--;//左移 
        }
        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    // 递归排序左右两部分
    if (left < j) {
        quickSort(arr, left, j);
    }
    if (i < right) {
        quickSort(arr, i, right);
    }
}

int main() {
    int arr[] = { 21,25,49,25,16,8 };//待排序的数组 
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);//调用函数 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";//输出结果 
    }
    return 0;
}

