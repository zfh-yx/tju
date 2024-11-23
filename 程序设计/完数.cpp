#include<bits/stdc++.h>
using namespace std;

bool perfectnum (int x)
{	
int sum=0;
	for(int j=1;j<x-1;j++)
	{
		if(x%j==0) sum=sum+j;
	}
	return sum==x;
}
int main()
{
	int n,num1,num2;
	cin>>n;
	int ans=0;
	for(int k=0;k<n;k++)
	{	
		cin>>num1>>num2;
		for(int i=num1;i<num2;i++)
		{	
			if(perfectnum(i)) ans++;
		}
		cout<<ans<<endl;	
	}
	return 0; 
}
