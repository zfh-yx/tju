#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n;cin>>n; 
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int power=0,weight=0; //����֮��
	for(int i=0;i<n-1;i++)
	{
		sort(a+i,a+n); //�����Ӷ�������С��������
		a[i+1]+=a[i];
		weight=a[i+1]; //�ϲ�����������С�Ĺ���
		power+=weight; //��������Ϊ�ϲ���������֮��
	}
	cout<<power<<endl;
	return 	0;	
}

