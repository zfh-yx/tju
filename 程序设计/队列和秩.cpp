#include<bits/stdc++.h>
using namespace std;

int  main()
{
	int m; cin>>m;
	for(int i=0;i<m;i++)
	{
		int n; cin>>n;
		queue<int>q;
		stack<int>s1;
		for(int j=0;j<n;j++)
		{
			string cz;
			cin>>cz;
			if(cz=="push")
			{
				int a; cin>>a;
				q.push(a);
				s1.push(a);
			}
			else if(cz=="pop")
			{
				if(!q.empty())
				{
					q.pop();
				}
				if(q.empty())
				{
					cout<<"error"<<endl;
				}
				if(!s1.empty())
				{
					s1.pop();
				}
				if(s1.empty())
				{
					cout<<"error"<<endl;
				}	
			}	
		}
		//
	}
	return 0; 
}


 
