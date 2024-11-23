#include <bits/stdc++.h>
using namespace std;
int dx[]={-2,-2,-1,-1,1,1,2,2},dy[]={-1,1,-2,2,-2,2,-1,1};
int n,m,sx,sy;
int dis[444][444];  
bool vis[444][444]; 
struct Node
{
	int x,y;
};
void dfs(){
	
}
void bfs()  
{
	queue<Node>q; 
	q.push({sx,sy}); 
	dis[sx][sy]=0;
	vis[sx][sy]=true;  
	while(1) 
	{
		if(q.empty())break;
		Node u=q.front(); 
		q.pop();
		for(int i=0;i<8;i++) 
		{
			int nx=u.x+dx[i];
			int ny=u.y+dy[i];
			if(nx>=1&&nx<=n&&ny>=1&&ny<=m)  
			{
				if(!vis[nx][ny]) 
				{
					dis[nx][ny]=dis[u.x][u.y]+1;
					vis[nx][ny]=true;
					q.push({nx,ny}); 
				}
			}
			
		}
	}
}
int main() 
{
	cin>>n>>m>>sx>>sy;
	memset(dis,-1,sizeof(dis));
	memset(vis,false,sizeof(vis));
	bfs();
	for(int i=1;i<=n;i++) 
	{
		for(int j=1;j<=m;j++) 
		{
			cout<<dis[i][j]<<" "; 
		}
		cout<<endl;
	}
	return 0;
}
