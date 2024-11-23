#include<iostream>
using namespace std;

int main()
{
	int w[105],v[105];
	int dp[105][1005];
    int t,m,res;
    cin>>t>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>w[i]>>v[i];
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=t;j>=0;j--)
        {
            if(j>=w[i])//只有当j>当前w[i]它才有选择的权力
            {
                dp[i][j]=max(dp[i-1][j-w[i]]+v[i],dp[i-1][j]);
            }
			else
			{
              dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[m][t]<<endl;
    return 0;
}

