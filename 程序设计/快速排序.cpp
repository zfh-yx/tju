#include<bits/stdc++.h>
using namespace std;
void quickSort(int arr[], int left, int right) {
    int i = left, j = right;
    int pivot = arr[(left + right) / 2]; // ѡȡ�м�Ԫ����Ϊ��׼

    // �ָ�����
    while (i <= j) {
        while (arr[i] < pivot) {
            i++;//���� 
        }
        while (arr[j] > pivot) {
            j--;//���� 
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
    int arr[] = { 21,25,49,25,16,8 };//����������� 
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);//���ú��� 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";//������ 
    }
    return 0;
}

