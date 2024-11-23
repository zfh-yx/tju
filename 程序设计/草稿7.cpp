#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100];//邻接表
void dfs(int start)
{
	stack<int> s;
	bool visited[100]={false};//标记数组，初始时所有顶点都未被访问
	s.push(start);//将起始顶点压入栈中
	visited[start]=true;//标记起始顶点已被访问
	while (!s.empty())
	{
		int cur=s.top();//取出栈顶元素
		s.pop();//弹出栈顶元素
		cout<<cur<<endl;//输出当前顶点
		for (int i=0;i<adj[cur].size();i++)
		{
			int next = adj[cur][i];//取出相邻顶点
			if (!visited[next])
			{ 
				s.push(next);//将相邻顶点压入栈中
				visited[next]=true;//标记相邻顶点已被访问
			}// 如果相邻顶点未被访问
		}
	}
}

int main()
{
	int n, m,start;//n为顶点数，m为边数,start为顶点 
	cin>>n>>m;
	for (int i=0;i<m;i++)
	{
		int u,v;//u和v之间有一条边
		cin>>u>>v;
		adj[u].push_back(v);//将v加入u的邻接表中
		adj[v].push_back(u);//将u加入v的邻接表中（如果是有向图，则只需加入一次）
	}
	cin>>start;
	dfs(start);//从起始顶点开始深度优先搜索
	return 0;
}
