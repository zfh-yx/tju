#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a[1000]; 
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];//输入边长 
	}
	int num=0;
	for(int i=0;i<n-2;i++)
	{
		for(int j=i+1;j<n-1;j++)
		{
			for(int k=j+1;k<n;k++)
			{
				if(a[i]+a[j]>a[k]&&a[j]+a[k]>a[i]&&a[i]+a[k]>a[j]&&a[i]-a[j]<a[k]&&a[j]-a[k]<a[i]&&a[i]-a[k]<a[j]) 
				num++; //三角形两边之和大于第三边，两边之差小于第三边 
			}
		}
	}
	cout<<num; //输出三元组个数 
	return 0;
}
