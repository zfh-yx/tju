#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	stack<int> S[n];
	int q; cin>>q;
	for(int i=0;i<q;i++)
	{
		int a;
		cin>>a;
		if(a==0) 
		{
			int b;
			int c;
			cin>>b>>c;
			S[b].push(c);
		}
		else if(a==1)
		{
			int b;
			cin>>b;
			if(!S[b].empty())
			{
				cout<<S[b].top()<<endl;
			}
		}
		else if(a==2)
		{
			int b;
			cin>>b;
			S[b].pop();	
		}
	}
	return 0;
}
