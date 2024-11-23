#include<bits/stdc++.h>
using namespace std;

int n;
int a[4007]={0},b[4007]={0};
bool flag =0;
bool check()
{
  	for(int i=1;i<=n;i++)
 	{
    	if(a[i]>=2)
  		{
	      bool isok=1;
	      memcpy(b,a,sizeof(a));
	      b[i]-=2;
	      for(int j=1;j<=n+2;j++)
   			{
		       if(b[j]<0)
			    {
			        isok=0;break;
			    }
			    b[j]%=3;
			    b[j+1]-=b[j];
			    b[j+2]-=b[j];
			}
			if (isok)  return 1;
		}
 	}
 	 return 0;
}
int main()
{
		int m;cin>>n>>m;
		for(int i=1;i<=m*3+1;i++)
		{
	    	int k;cin>>k;a[k]++;
		}
	  	for(int i=1;i<=n;i++)
	 	{
		    a[i]++;
		    if(check())
		  	{
		      	cout<<i<<" ";flag=1;
		    }
		    a[i]--;
		}
		if(!flag) cout<<"NO";
}
