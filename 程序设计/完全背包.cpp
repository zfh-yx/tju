#include <bits/stdc++.h>
using namespace std;
int dp[50005];//dp[j] ����˼�Ǳ�������Ϊ j ��ʱ����ǡ��װ����Ʒ������ֵ
int main()
{
	int n,m,w,v,t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n>>m;
		memset(dp,-1,sizeof(dp));
		dp[0]=0;//Ҫ�ǵø���ֵ��������������Ϊ0ʱ����װ��������ֵΪ0
		for(int i=1;i<=n;i++)
		{
		  	cin>>w>>v;
		  	for(int j=w;j<=m;j++)//j�ĳ�ֵ��w��ʼ��j++�Ļ��������dp[j]������dp[j-1]���� ������Ϊ-1�� 
		  	{//��������ȫ������Ʒ���޸������ص� 
			  	if(dp[j-w]==-1) continue;//���ܸպ�װ�� 
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
