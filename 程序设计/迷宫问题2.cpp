#include<bits/stdc++.h>
using namespace std;

char maze[5][5];
int vis[5][5];
const int dx[4]={0,1,0,-1};
const int dy[4]={1,0,-1,0};
struct point
{
	int x,y;
}pr[10][10];//定义坐标结构体 
queue<point> q;//定义队列 
void bfs(point s)
{
	s.x=0,s.y=0;
	q.push(s);
	vis[0][0]=1;
	int mase[5][5];
	for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {   
            mase[i][j]=maze[i][j]-'0';//将char数组转化为int数组 
        }
    }
	while(1)
	{
		if(q.empty())break;//判空则循环结束 
		point p=q.front();
		q.pop();
		if(p.x==5&&p.y==5)return;
		int i=4;
		while(i--)
		{
			int a,b;
			a=p.x+dx[i];
			b=p.y+dy[i];
			if(a>=0&&a<5&&b>=0&&b<5)
			{
				if(!mase[a][b]&&!vis[a][b])
				{
					point t;
					t.x=a;
					t.y=b;
					q.push(t);
					vis[a][b]=1;
					pr[a][b]=p;
				}
			}
			
		}
	}
}
void output(point p)
{
	if(!p.x&&!p.y)
	{
		cout<<"(0, 0)"<<endl;
		return;
	}
	output(pr[p.x][p.y]);
	cout<<"("<<p.x<<", "<<p.y<<")"<<endl;
}

int main()
{
	point end;
	end.x=4;
	end.y=4;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>maze[i][j];//输入数组 
		}
	}
	bfs(end);//深搜 
	output(end);
} 
