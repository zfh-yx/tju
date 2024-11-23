#include<bits/stdc++.h>
using namespace std;
int s[1000][1000];
int a[1000],x[1000];
int j;
void dfs(int t,int m)
{ 
    a[j++]=t;
    x[t]=1;
    for(int i=1;i<=m;i++)
    {
        if(s[t][i]==1&&x[i]!=1)
            dfs(i,m);
    }
}
int main()
{
    int n,e;
    while(cin>>n>>e)
    {
		int y,z;
        memset(x,0,sizeof(x));
        memset(x,0,sizeof(x));
        for(int i=0;i<e;i++)
        {
            cin>>y>>z;
            s[y][z]=s[z][y]=1;
        }
        dfs(1,n);
        for(int i=0;i<n-1;i++)
        {
        	 cout<<a[i]<<" ";
		}
    	cout<<a[n-1]<<endl;
    }
 
    return 0;
}
