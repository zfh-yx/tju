#include<bits/stdc++.h>
using namespace std;
void shellSort(int arr[], int n) {
	for (int gap = n / 2; gap > 0; gap /= 2) {//���岽�� 
		for (int i = gap; i < n; i++) {//�������в������� 
			int temp = arr[i];
			int j;
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
				arr[j] = arr[j - gap];//���� 
			}
			arr[j] = temp;
		}
	}
}

int main() {
	int arr[] = { 21,25,49,25,16,8 };
	int n = 6;
	shellSort(arr, n);//�Ը��������ϣ������ 
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";//������������� 
	}
	return 0;
}
