#include <bits/stdc++.h>
using namespace std;
const int inf=0x3f3f3f;
const int INF = 0x3f3f3f3f; //用来初始化
const int maxn = 110;
int dis[maxn][maxn][maxn], a[maxn][maxn], c[maxn];

int main() 
{
	int N,K,M,S,T;
	scanf("%d%d%d%d%d",&N,&K,&M,&S,&T);
	for(int i=1;i<=N;i++)
	{
		scanf("%d",&c[i]); // 读入每个国家文化
	}
	memset(a,0,sizeof(a)); // 将 a 数组初始化
	for(int i=1;i<=K;i++)
	{
		for(int j=1;j<=K;j++)
		{
			scanf("%d",&a[i][j]); // 读入排斥情况
		}
	}
	memset(dis,0x3f,sizeof(dis)); // 将 dis 数组初始化为无穷大
	for(int i=1;i<=N;i++) dis[i][i][c[i]] = 0; // 对角线上的点不排斥自己
	for(int i=1;i<=M;i++)
	{
		int u,v,d;
		scanf("%d%d%d",&u,&v,&d); // 读入边的信息
		for(int k=1;k<=K;k++)
		{
			if(a[c[v]][k]==1 || a[c[u]][k]==1) continue;
			dis[u][v][k] = dis[v][u][k] = min(dis[u][v][k],d); // 更新距离
		}
	}
	// Floyd 算法部分，将每个点看成一个源点，求出到其他点的最短路径
	for(int k=1;k<=K;k++)
	{
		for(int t=1;t<=N;t++)
		{
			for(int i=1;i<=N;i++)
			{
				for(int j=1;j<=N;j++)
				{
					if(a[c[i]][k]==1 || a[c[j]][k]==1) continue;
					dis[i][j][k] = min(dis[i][j][k],dis[i][t][k]+dis[t][j][k]);
					// 更新距离
				}
			}
		}
	}
	int ans = INF;
	for(int k=1;k<=K;k++)
	{
		ans = min(ans,dis[S][T][k]);
	}
	if(ans == INF) ans = -1; // 无法到达
	cout<<ans<<endl; // 输出最短距离
	return 0;
}
