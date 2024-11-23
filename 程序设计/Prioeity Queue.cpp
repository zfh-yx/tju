#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin>>n;
	cin>>q;
	priority_queue<int>Q[n];
	for(int i=0;i<q;i++)
	{
		int a;
		cin>>a;
		if(a==0)
		{
			int b;
			long long int c;
			cin>>b>>c;
			Q[b].push(c);
		}
		else if(a==1)
		{
			int b;
			cin>>b;
			if(!Q[b].empty())
			{
				cout<<Q[b].top()<<endl;
			}
		}
		else if(a==2)
		{
			int b;
			cin>>b;
			if(!Q[b].empty())
			{
				Q[b].pop();
			}
		}
	}
	return 0;
	
}
