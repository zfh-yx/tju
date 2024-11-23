#include<bits/stdc++.h>
using namespace std;
int maxSum(int n, int b[])
{
    int sum = 0;
    for(int i= 0; i < n; i++)    
    {
        int thisSum = 0;
        for(int j = i; j < n; j++)
        {
            thisSum += b[j];
            if(thisSum > sum)
            {
                sum = thisSum;
            }
        }
    }
	return sum;
}
int main()
{
    int m;cin>>m;
    
    for(int i=0;i<m;i++)
    {
		int n;cin>>n;
		int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        cout<<maxSum(n,a)<<endl;
    }
    return 0;
}
