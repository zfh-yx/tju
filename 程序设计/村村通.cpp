#include<bits/stdc++.h>
using namespace std;

int n, m;
int f[10000];

int find(int x){
    if (x!=f[x])
	{
		f[x]=find(f[x]);
	}
    return f[x];
}

int main()
{
	int a,b;
	int x,y;
    while (cin>>n>>m,n)
	{
        for (int i=1;i<=n;i++) 
		{
			f[i]=i;
		}
        while(m--)
		{
			cin>>a>>b;
            x=find(a);
			y=find(b);
            f[x]=y;
        }
        int res=0;
        for (int i=1;i<=n;i++)
		{
            if (f[i]==i) 
			{
				res++;
			}   
        }
        cout<<res-1<<endl;
    }
    return 0;
}
