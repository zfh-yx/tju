#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100];//�ڽӱ�
void dfs(int start)
{
	stack<int> s;
	bool visited[100]={false};//������飬��ʼʱ���ж��㶼δ������
	s.push(start);//����ʼ����ѹ��ջ��
	visited[start]=true;//�����ʼ�����ѱ�����
	while (!s.empty())
	{
		int cur=s.top();//ȡ��ջ��Ԫ��
		s.pop();//����ջ��Ԫ��
		cout<<cur<<endl;//�����ǰ����
		for (int i=0;i<adj[cur].size();i++)
		{
			int next = adj[cur][i];//ȡ�����ڶ���
			if (!visited[next])
			{ 
				s.push(next);//�����ڶ���ѹ��ջ��
				visited[next]=true;//������ڶ����ѱ�����
			}// ������ڶ���δ������
		}
	}
}

int main()
{
	int n, m,start;//nΪ��������mΪ����,startΪ���� 
	cin>>n>>m;
	for (int i=0;i<m;i++)
	{
		int u,v;//u��v֮����һ����
		cin>>u>>v;
		adj[u].push_back(v);//��v����u���ڽӱ���
		adj[v].push_back(u);//��u����v���ڽӱ��У����������ͼ����ֻ�����һ�Σ�
	}
	cin>>start;
	dfs(start);//����ʼ���㿪ʼ�����������
	return 0;
}
