#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin>>n;
	cin>>q;
	list<int>L[n];
	for(int i=0;i<q;i++)
	{
		int a;
		cin>>a;
		if(a==0)
		{
			int b;
			long long int c;
			cin>>b>>c;
			L[b].push_back(c);
		}
		else if(a==1)
		{
			int b;
			cin>>b;
			list<int>::iterator it;
			for(it=L[b].begin();it!=L[b].end();it++)
			{
				cout<<*it<<" ";
			}
			cout<<endl;
		}
		else if(a==2)
		{
			int b,c;
			cin>>b>>c;
			list<int>::iterator it;
			L[c].splice(L[c].end(),L[b]);
		}
	}
	return 0;
}
