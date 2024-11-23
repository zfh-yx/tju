#include <iostream>
using namespace std;

void quickSort(int arr[], int left, int right) {
    int i = left, j = right;
    int pivot = arr[(left + right) / 2]; // 选取中间元素作为基准

    // 分割数组
    while (i <= j) {
        while (arr[i] < pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
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
    int arr[] = { 21,25,49,25,16,8 };
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
快速排序的思路：
1. 选取一个基准元素（pivot），一般选取中间元素
2. 将数组分为两部分，左边的元素都小于基准元素，右边的元素都大于基准元素
3. 递归排序左右两部分
4. 合并左右两部分

时间复杂度：O(nlogn)
空间复杂度：O(logn)
*/
