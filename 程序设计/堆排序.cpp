#include<bits/stdc++.h>
using namespace std;

// 堆排序函数
void heapSort(int arr[], int n)
{
	// 构建最大堆
	for (int i = n / 2 - 1; i >= 0; i--) 
	{
		// 从最后一个非叶子节点开始，依次向上调整
		int parent = i;
		int child = 2 * parent + 1;
		while (child < n) 
		{
			// 如果右子节点比左子节点大，则选择右子节点
			if (child + 1 < n && arr[child + 1] > arr[child]) 
			{
				child++;
			}
			// 如果子节点比父节点大，则交换
			if (arr[child] > arr[parent]) 
			{
				swap(arr[child], arr[parent]);
				parent = child;
				child = 2 * parent + 1;
			} 
			else break;
			
		}
	}
	// 排序
	for (int i = n - 1; i > 0; i--) 
	{
		// 将堆顶元素与最后一个元素交换
		swap(arr[0], arr[i]);
		// 重新调整堆
		int parent = 0;
		int child = 2 * parent + 1;
		while (child < i) 
		{
			// 如果右子节点比左子节点大，则选择右子节点
			if (child + 1 < i && arr[child + 1] > arr[child])
			{
				child++;
			}
			// 如果子节点比父节点大，则交换
			if (arr[child] > arr[parent]) 
			{
				swap(arr[child], arr[parent]);
				parent = child;
				child = 2 * parent + 1;
			} 
			else break;
			
		}
	}
}

int main() 
{
	int arr[] = { 21,25,49,25,16,8 };
	int n = sizeof(arr) / sizeof(arr[0]);
	heapSort(arr, n);
	for (int i = 0; i < n; i++) 
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
