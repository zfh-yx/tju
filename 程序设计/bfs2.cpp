#include<bits/stdc++.h>
using namespace std;
int n,e,x,y,hh,tt=1;
int q[15];
bool g[15][15],k[15];
void bfs()
{
    int l,t;
	int flag=true;
    while(hh<tt)
	{
        k[q[hh]]=true;
        l=hh;
		flag=false;
        t=q[hh];
        cout<<q[hh]<<" ";
        hh++;
        for(int i=1;i<=n;i++)
        {
        	if(!k[i]&&g[t][i])
			{
                k[i]=true;
				flag=true;
                q[tt++]=i;
            }   
		}
            
    }
}
int main(){
    cin>>n>>e;
    for(int i=0;i<e;i++)
	{
        cin>>x>>y;
        g[x][y]=1;
        g[y][x]=1;
    }
    q[0]=1;
    k[1]=true;
    bfs();
    return 0;
}
