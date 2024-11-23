#include<bits/stdc++.h>
using namespace std;
int n,m;
char g[400][400];
bool st[400][400];

int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};

void cell(int x, int y)
{
	st[x][y]=true;
	for (int i=0;i<4;i++)
	{
		int a=x+dx[i],b=y+dy[i];
		if(a<1||a>n||b<1||b>m) continue;
		if(g[a][b]=='0'||st[a][b]) continue;
		cell(a,b);
	}
}

int main()
{
	int ans=0;
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
		{
			cin>>g[i][j];
		}
	}			
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
		{
			if(g[i][j]!='0'&&!st[i][j])
			{
				ans++;
				cell(i,j);
			}
		}	
	}		
	cout<<ans<<endl;
	return 0;		
}
