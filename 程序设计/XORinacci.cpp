#include<bits/stdc++.h>
using namespace std;
int XORinacci(long long a,long long b,long long N)
	{
 		if(N%3==0)return a;
 		else if(N%3==1)return b;
 		else return a^b;
	}
int main()
{
	int T;cin>>T;
	long long a,b,n;
	while(cin>>a>>b>>n)
	{
	  	cout<<XORinacci(a,b,n)<<endl;
		T--;
	}
}
