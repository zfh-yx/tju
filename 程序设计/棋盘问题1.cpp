#include<bits/stdc++.h>
using namespace std;

const int a=8;
int n,k,ans=0;
char chess[a][a];
bool visit[a];
void dfs(int x,int num);
int main()
{
    while(cin>>n>>k)
	{
        if(n==-1&&k==-1)break;
		for(int i=0;i<a;i++)
		{
			visit[i]=false;
		}
        for(int i=0;i<n;i++)
		{
            for(int j=0;j<n;j++)
			{
                cin>>chess[i][j];
            }
            getchar();
        }
        dfs(0,0);
        cout<<ans<<endl;
        ans=0;
    }
}
void dfs(int x,int num)
{
    if(num==k)
	{
        ans++;
        return;
    }
    if(x>=n)return;
    for(int i=0;i<n;i++)
	{
        if(!visit[i]&&chess[x][i]=='#')
		{
            visit[i]=true;
            dfs(x+1,num+1);
            visit[i]=false;
        }
    }
    dfs(x+1,num);
}
