#include<bits/stdc++.h>
using namespace std;

const int INF = 1000000000;
const int maxv = 200;
int n;
int dis[maxv][maxv];
void Floyd()
{
    for(int k =0 ;k < n;k++)
	{
        for(int i = 0;i< n ;i++)
		{
            for(int j =0 ;j< n ;j++)
			{
                if(dis[i][k]!=INF&&dis[k][j]!=INF&&dis[i][k]+dis[k][j]<dis[i][j])
				{
                    dis[i][j]=dis[i][k]+dis[k][j];
                }
            }
        }
    }
}
int main(){
    fill(dis[0],dis[0]+maxv*maxv,INF);
    cin>>n;
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>dis[i][j];
            if(i!=j)
			{
                if(dis[i][j]==0)
				{
                    dis[i][j]=INF;
                }
            }
        }
    }
    Floyd();
    for(int i =0;i<n;i++)
	{
        for(int j=0;j<n;j++)
		{
             if(dis[i][j]==INF)cout<<"-1 ";
             else cout<<dis[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
