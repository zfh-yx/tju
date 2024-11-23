#include<bits/stdc++.h>
using namespace std;

const int inf=0x3f3f3f;
int a[1000][1000];
int book[1000];
int t,s,d,n;
 
void tour()
{   
	int u,minn;
	memset(book,0,sizeof(book));
	for(int i=1;i<=n;i++)
	{
		minn=inf;
		for(int j=1;j<=n;j++)
		{
			if(book[j]==0&&a[0][j]<minn)
			{
				minn=a[0][j];
				u=j;
			}
		}
		if(minn==inf)break;
		book[u]=1;
		for(int k=1;k<=n;k++)
		{
			if(book[k]==0&&a[0][k]>a[0][u]+a[u][k])
		    a[0][k]=a[0][u]+a[u][k];
		}
	}
}

int main()
{
	int dd,ans,c;
	while(cin>>t>>s>>d)
	{
		memset(a,inf,sizeof(a));
		int x2,x1,x;
		n=0;//3.
		for(int i=1;i<=t;i++)
		{
			cin>>x1>>x2>>x;
			if(x<a[x1][x2])
			{
				a[x1][x2]=a[x2][x1]=x;//4.x·ÅÔÚ×îÓÒ±ß 
				if(x1>n)	n=x1;
				if(x2>n)	n=x2;
			}
		}
		for(int i=1;i<=s;i++)
		{
			cin>>c;
			a[0][c]=a[c][0]=0;
		}
		tour();
		ans=inf;
		for(int i=1;i<=d;i++)
		{
			cin>>dd;//2.
			if(a[0][dd]<ans)
			{
				ans=a[0][dd];
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
