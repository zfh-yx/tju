#include<bits/stdc++.h>
using namespace std;
void shellSort(int arr[], int n) {
	for (int gap = n / 2; gap > 0; gap /= 2) {//定义步长 
		for (int i = gap; i < n; i++) {//挨个进行插入排序 
			int temp = arr[i];
			int j;
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
				arr[j] = arr[j - gap];//换序 
			}
			arr[j] = temp;
		}
	}
}

int main() {
	int arr[] = { 21,25,49,25,16,8 };
	int n = 6;
	shellSort(arr, n);//对该数组进行希尔排序 
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";//输出排序后的数组 
	}
	return 0;
}
