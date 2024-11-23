#include<bits/stdc++.h>
using namespace std; 
int main()
{
	int n;  cin>>n;
	list<int>A;
	for(int i=0;i<n;i++)
	{
		long long int a;
		cin>>a;
		A.push_back(a);
	} 
	A.unique();
	
	list<int>::iterator it;
	for(it=A.begin();it!=A.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	return 0;
}
