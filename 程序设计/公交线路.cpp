#include<bits/stdc++.h>
using namespace std;
const int inf=0x3f3f3f3f;
const int maxn=1005;
int n,m,s,t,a,b,v,k;
int vis[maxn],dis[maxn],f[maxn][maxn];
void bus()
{
	for(int i=1;i<=n;i++)
	{
		dis[i]=f[s][i];
	}
	dis[s]=0;
	vis[s]=1;
	for(int i=1;i<=n;i++)
	{
		int ans=inf,k=0;
		for(int j=1;j<=n;j++)
		{
			if(!vis[j]&&dis[j]<ans)
			{
				k=j;
				ans=dis[j];
			}
		}
		vis[k]=1;
		if(ans==inf)break;
		for(int j=1;j<=n;j++)
		{
			if(!vis[j]&&dis[k]+f[k][j]<dis[j])
			{
				dis[j]=dis[k]+f[k][j];
			}
		}
	}
	return;
}

int main()
{
	cin>>n>>m>>s>>t;
	memset(f,inf,sizeof(f));
	memset(vis,0,sizeof(vis));
	for(int i=0;i<m;i++)
	{
		cin>>a>>b>>v;
		if(f[a][b]>v)
		{
			f[a][b]=f[b][a]=v;
		}
	}
	bus();
	if(dis[t]==inf)cout<<-1<<endl;
	else cout<<dis[t]<<endl;
	return 0;
}
