#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n;cin>>n; 
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int power=0,weight=0; //体力之和
	for(int i=0;i<n-1;i++)
	{
		sort(a+i,a+n); //将果子堆重量从小到大排序
		a[i+1]+=a[i];
		weight=a[i+1]; //合并两个重量最小的果子
		power+=weight; //消耗体力为合并果子重量之和
	}
	cout<<power<<endl;
	return 	0;	
}

