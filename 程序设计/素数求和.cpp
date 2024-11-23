#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N; cin>>N;
	unsigned long long int ans=0; 
	bool p[10000000]={0};
	for(int i=2;i<=N;i++)
	{
		if(!p[i])
		{
  			 for(int j=2*i;j<=N;j+=i)
   			{
    			p[j]=1;
   			}
  		}	
	}
	for(int i=2;i<=N;i++)
 	{
  		if(!p[i])
 		{
   			ans+=(unsigned long long)i;
  		}
  		else
  		{
   			ans+=0;
  		}
	}
	cout<<ans;
 	return 0;
}
