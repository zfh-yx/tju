#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin>>n;
	for(int i=0;i<n;i++)
	{
		int y,m,d;
		scanf("%d/%d/%d",&y,&m,&d);
  		int num=d;
 		int arr1[]={31,28,31,30,31,30,31,31,30,31,30,31};
  		int arr2[]={31,29,31,30,31,30,31,31,30,31,30,31};
  		if(y%4==0)
  		{
  			for(int j=0;j<12;j++)
  			{
  				if(m==(j+1))
  				{
  					for(int k=0;k<j;k++)
  					{
  						num+=arr2[k];
					}
				}
			}
		}
		else
		{
			for(int j=0;j<12;j++)
			{
				if(m==(j+1))
  				{
  					for(int k=0;k<j;k++)
  					{
  						num+=arr1[k];
					}
				}
			}
		}
		cout<<num<<endl;
	}
	return 0;
}
