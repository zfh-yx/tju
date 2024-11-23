#include<bits/stdc++.h>
using namespace std;

// ��������
void heapSort(int arr[], int n)
{
	// ��������
	for (int i = n / 2 - 1; i >= 0; i--) 
	{
		// �����һ����Ҷ�ӽڵ㿪ʼ���������ϵ���
		int parent = i;
		int child = 2 * parent + 1;
		while (child < n) 
		{
			// ������ӽڵ�����ӽڵ����ѡ�����ӽڵ�
			if (child + 1 < n && arr[child + 1] > arr[child]) 
			{
				child++;
			}
			// ����ӽڵ�ȸ��ڵ���򽻻�
			if (arr[child] > arr[parent]) 
			{
				swap(arr[child], arr[parent]);
				parent = child;
				child = 2 * parent + 1;
			} 
			else break;
			
		}
	}
	// ����
	for (int i = n - 1; i > 0; i--) 
	{
		// ���Ѷ�Ԫ�������һ��Ԫ�ؽ���
		swap(arr[0], arr[i]);
		// ���µ�����
		int parent = 0;
		int child = 2 * parent + 1;
		while (child < i) 
		{
			// ������ӽڵ�����ӽڵ����ѡ�����ӽڵ�
			if (child + 1 < i && arr[child + 1] > arr[child])
			{
				child++;
			}
			// ����ӽڵ�ȸ��ڵ���򽻻�
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
