#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		int n;
		cin>>n;
		int num=0;
		int a[n]={0};
		int tmp=n;
		while(1)
		{
			for(int j=0;j<n;j++)
			{
				if(a[j]==0)
				{
					num++;
					if(num%7==0)
					{
						a[j]=1;
						tmp--;
					}
				}
			}
			if(tmp<7)break;
		}
		for(int j=0;j<n;j++)
		{
				if(a[j]==0)
				cout<<j+1<<" ";
		}cout<<endl;
	}	
	return 0;
}
