#include <bits/stdc++.h>
using namespace std;
int dp[50005];//dp[j] 的意思是背包容量为 j 的时候能恰好装满物品的最大价值
int main()
{
	int n,m,w,v,t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n>>m;
		memset(dp,-1,sizeof(dp));
		dp[0]=0;//要记得赋初值！！！背包容量为0时不能装东西，价值为0
		for(int i=1;i<=n;i++)
		{
		  	cin>>w>>v;
		  	for(int j=w;j<=m;j++)//j的初值从w开始，j++的话，往后的dp[j]都会有dp[j-1]可用 （即不为-1） 
		  	{//体现了完全背包物品不限个数的特点 
			  	if(dp[j-w]==-1) continue;//不能刚好装下 
			  	if(dp[j]<=dp[j-w]+v)
			  	{
			  		dp[j]=dp[j-w]+v;
				}
			}	
		}
		if(dp[m]==-1)cout<<endl;
		else cout<<dp[m]<<endl;
	}
	return 0;
} 
