#include<bits/stdc++.h>
using namespace std;
int dis;
long long q[1000],p[1000];
int pay(int x)
{
	for(int i=1;i<=dis;i++)
	{
		p[i]=1000;
		for(int j=1;j<=10;j++)
		{
			if(i-j>=0)
			{
				if(p[i-j]+q[j]<p[i])
				p[i]=p[i-j]+q[j];
			}
		}
	} 
	return p[x];
}
int main()
{
	for(int i=1;i<=10;i++)	
	{
		cin>>q[i]; 
	}
	cin>>dis;
	cout<<pay(dis);
	return 0;
}
