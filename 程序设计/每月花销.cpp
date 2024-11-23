#include<bits/stdc++.h>
using namespace std;
int N,M;
int a[110];
int ef(int l,int r)
{
	while(l<=r)
	{
		int cnt=1;
		int last=0;
		int mid=(l+r)/2;
		for(int i=1;i<=N;i++)
		{
			if(a[i]-a[last]>mid)
			{
				cnt++;
				last=i-1;
			}
		}
		if(cnt>M) 
			l=mid+1;
		else r=mid-1; 
	}
	return l;
}
int main(){
	while(cin>>N>>M)
	{
		int MAX=0;
		memset(a,0,sizeof(a));
		a[0]=0;
		for(int i=1;i<=N;i++)
		{
			cin>>a[i];
			if(MAX<a[i])
				MAX=a[i];
			a[i]=a[i-1]+a[i]; 
		}
		
		cout<<ef(MAX,a[N])<<endl;
	}
	return 0;
}
