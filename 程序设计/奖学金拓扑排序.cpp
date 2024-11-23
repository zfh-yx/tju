#include<bits/stdc++.h>
using namespace std;
vector<vector<int> >G;
int visited[10001];
int n,s=0;
int value[10001];
int indexx;
bool dfs(int child,int parent)
{
    visited[child] = -1;
    vector<int>::iterator it;
    for(it = G[child].begin(); it!=G[child].end(); ++it)
    {
        indexx=*it;
        if(visited[indexx]==-1)
            return false;
        else
        {
            if(!visited[indexx])
            {
                if(!dfs(indexx,child))
                    return false;
            }
            else
            {
                if(value[indexx]+1 > value[child])
                    value[child] = value[indexx]+1;
            }
        }
    }

    visited[child]=1;
    s += 100 + value[child];
    if(parent!=0&&value[child]+1>value[parent])
        value[parent]=value[child]+1;
    return true;
}

bool toposort()
{
    for(int i=1;i<=n;++i)
    {
        if(!visited[i]&&!dfs(i,0))
           return false;
    }
    return true;
}
int main()
{
    G.clear();
    memset(visited,0,sizeof(visited));
    memset(value,0,sizeof(value));
    int m;
    cin>>n>>m; 
    G.resize(n+1);
    int a,b;
    for(int i=1; i<=m;++i)
    {
        cin>>a>>b;
        G[a].push_back(b);
    }
    if(toposort())
    {
        cout<<s<<endl;
    }
    else
        cout<<"impossible";

    return 0;
}
