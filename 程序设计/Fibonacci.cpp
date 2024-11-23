#include<bits/stdc++.h>
using namespace std;

long long a[10000]={0};
long long  Fibonacci(int x)
{
	if(a[x]) return a[x];
	if(x==1) return a[x]=1;
	if(x==0) return a[x]=0;
	return a[x]=Fibonacci(x-1)+Fibonacci(x-2);
} 
 
int main()
{
	int N;
	cin>>N;
	for(int i=0;i<N;i++)
	{	
		int Pi;
		cin>>Pi;
		if(i==N) cout<<Fibonacci(Pi);
		else cout<<Fibonacci(Pi)<<endl;
	}
	return 0;	
}

//µÝ¹é»áÊä³ö³¬ÏÞ 
