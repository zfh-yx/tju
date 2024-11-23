#include <iostream>
using namespace std;

void quickSort(int arr[], int left, int right) {
    int i = left, j = right;
    int pivot = arr[(left + right) / 2]; // ѡȡ�м�Ԫ����Ϊ��׼

    // �ָ�����
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

    // �ݹ���������������
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
���������˼·��
1. ѡȡһ����׼Ԫ�أ�pivot����һ��ѡȡ�м�Ԫ��
2. �������Ϊ�����֣���ߵ�Ԫ�ض�С�ڻ�׼Ԫ�أ��ұߵ�Ԫ�ض����ڻ�׼Ԫ��
3. �ݹ���������������
4. �ϲ�����������

ʱ�临�Ӷȣ�O(nlogn)
�ռ临�Ӷȣ�O(logn)
*/
