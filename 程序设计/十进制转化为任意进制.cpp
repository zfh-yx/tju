#include<bits/stdc++.h>
using namespace std;
void trans(long long a, int n)
{
    if (0 == a)
        return;
    trans(a / n, n);
    cout << "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[a % n];
}
int main()
{
    long long a;
    int n;
    while(cin >> a >> n)
	{
    	if (a == 0)cout << "0"<<endl;
    	else if(a<0){
    		long long b=abs(a);
    		cout<<"-";trans(b,n);
    		cout<<endl;
		}
    	else trans(a, n);cout<<endl;
	}
    return 0;
}
