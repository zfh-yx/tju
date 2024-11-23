#include<bits/stdc++.h>

using namespace std;

long long k[10000];
long long hanoi(int a)
{
  	if(a==1) return 1;
	if(k[a]) return k[a];//直接返回数组中的数 
  	else return k[a]=hanoi(a-1)+1+hanoi(a-1);
}
int main()
{
  	int n;cin>>n;
  	for(int i=1;i<=n;i++)
 	{
	    int a;cin>>a;
	    cout<<hanoi(a)<<endl;//调用函数 
  	}
}
