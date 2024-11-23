#include <bits/stdc++.h>
using namespace std;
const int inf=0x3f3f3f;
const int INF = 0x3f3f3f3f; //������ʼ��
const int maxn = 110;
int dis[maxn][maxn][maxn], a[maxn][maxn], c[maxn];

int main() 
{
	int N,K,M,S,T;
	scanf("%d%d%d%d%d",&N,&K,&M,&S,&T);
	for(int i=1;i<=N;i++)
	{
		scanf("%d",&c[i]); // ����ÿ�������Ļ�
	}
	memset(a,0,sizeof(a)); // �� a �����ʼ��
	for(int i=1;i<=K;i++)
	{
		for(int j=1;j<=K;j++)
		{
			scanf("%d",&a[i][j]); // �����ų����
		}
	}
	memset(dis,0x3f,sizeof(dis)); // �� dis �����ʼ��Ϊ�����
	for(int i=1;i<=N;i++) dis[i][i][c[i]] = 0; // �Խ����ϵĵ㲻�ų��Լ�
	for(int i=1;i<=M;i++)
	{
		int u,v,d;
		scanf("%d%d%d",&u,&v,&d); // ����ߵ���Ϣ
		for(int k=1;k<=K;k++)
		{
			if(a[c[v]][k]==1 || a[c[u]][k]==1) continue;
			dis[u][v][k] = dis[v][u][k] = min(dis[u][v][k],d); // ���¾���
		}
	}
	// Floyd �㷨���֣���ÿ���㿴��һ��Դ�㣬���������������·��
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
					// ���¾���
				}
			}
		}
	}
	int ans = INF;
	for(int k=1;k<=K;k++)
	{
		ans = min(ans,dis[S][T][k]);
	}
	if(ans == INF) ans = -1; // �޷�����
	cout<<ans<<endl; // �����̾���
	return 0;
}
