#include<bits/stdc++.h>
using namespace std;
const int N=1010;
int binary_search(int *a, int R, int x)
{
    int L = 1, mid;
    while(L <= R)
    {
        mid = (L+R) >> 1;
        if(a[mid] <= x)
            L = mid + 1;
        else 
            R = mid - 1;
    }
    return L;
}
int main()
{
	int dp[N],a[N];
	int n;cin>>n;
	int res = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)//����������С�
    {
        dp[i]=1;//ֻ��һ��Ԫ��a[i]��ʱ�������еĳ���Ϊ1�����ǽ�������ΪĬ��ֵ��
        for(int j=1;j<i;j++)//״̬ת�Ʒ��̡�
        {
           if(a[j]<a[i])
           {
               dp[i]=max(dp[j]+1,dp[i]);
           }
        }
    }
    for (int i = 1; i <= n; i ++ ) 
	{
		res = max(res, dp[i]);
	}
    cout<<res<<endl;
}
