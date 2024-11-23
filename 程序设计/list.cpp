#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	list<int>id[10000];
	for(int i=0;i<n;i++)
	{
		string order;
		cin>>order;
		if(order == "add")
		{
			int a,b;
			cin>>a>>b;
			id[a].push_back(b);
		}
		else if(order=="out")
		{
			int a;
			cin>>a;
			if(id[a].empty())
			{
				cout<<endl;
			}
			else
			{
				id[a].sort();
				list<int>::iterator it;
				for(it=id[a].begin();it!=id[a].end();it++)
				{
					cout<<*it<<" ";
				}
				cout<<endl;
				}
		}
		else if(order=="merge")
		{
			int a,b;
			cin>>a>>b;
			id[a].merge(id[b]);
			id[b].clear();
		}
		else if(order=="unique")
		{
			int a;
			cin>>a;
			id[a].sort();
			id[a].unique();
		}
		else
		{
			cin>>order;
		}
	}
	return 0;
}

