#include<bits/stdc++.h>
using namespace std;
const int n = 1e3 + 10;
long long int s[n][n],dp[n];
int main()
{
 	int N;
 	while(cin>>N)
 	{
  		for(int i=1;i<=N;i++)
  		{
   			for(int j=1;j<=N;j++)
   			{
    			long long int a;
    			cin>>a;
    			s[i][j]=a+s[i-1][j]+s[i][j-1]-s[i-1][j-1];
   			}
  		}
  		int T=1;
  		long long int ans = -1e10;
  		for(int i=1;i<=N;i++)
  		{
   			for(int j=i;j<=N;j++)
   			{
    			memset(dp,0,sizeof(dp));
    			for(int k=1;k<=N;k++)
    			{
	     			if(dp[k-1]<0)
	      				dp[k]=s[j][k]-s[i-1][k]-s[j][k-1]+s[i-1][k-1];
	     			else
	      				dp[k]=s[j][k]-s[i-1][k]-s[j][k-1]+s[i-1][k-1]+dp[k-1];
	    			 	ans=max(ans,dp[k]);
    			}
   			}
  		}
  		cout<<ans<<endl;
  		memset(s,0,sizeof(s));
 	}
}
